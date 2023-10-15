import React, { createContext, PropsWithChildren, useContext, useState } from 'react';

const LOCAL_STORAGE_THEME_KEY = 'bugsThemeStorageKey';

type ThemeType = 'dark' | 'light';

type ThemeContextType = {
  currentTheme: ThemeType;
  toggleCurrentTheme: () => void;
};

function isServer(): boolean {
  return typeof window === 'undefined';
}

function getSystemThemePreference(): ThemeType {
  if (window.matchMedia && window.matchMedia('(prefers-color-scheme: dark)').matches) {
    return 'dark';
  }

  return 'light';
}

function getCurrentThemeFromLocalStorage(): ThemeType {
  if (isServer()) {
    return 'dark';
  }

  return (localStorage.getItem(LOCAL_STORAGE_THEME_KEY) as ThemeType) ?? getSystemThemePreference();
}

function setCurrentThemeInLocalStorage(themeType: ThemeType) {
  if (isServer()) {
    return;
  }

  localStorage.setItem(LOCAL_STORAGE_THEME_KEY, themeType);
}

const ThemeContext = createContext<ThemeContextType>({
  currentTheme: 'light',
  toggleCurrentTheme: () => setCurrentThemeInLocalStorage('dark'),
});

export function useThemeContext() {
  return useContext(ThemeContext);
}

export function ThemeContextProvider({ children }: PropsWithChildren) {
  const [currentTheme, setCurrentTheme] = useState<ThemeType>(getCurrentThemeFromLocalStorage);

  return (
    <ThemeContext.Provider
      value={{
        currentTheme,
        toggleCurrentTheme: () => {
          setCurrentTheme((prevTheme) => {
            const newTheme = prevTheme === 'light' ? 'dark' : 'light';
            setCurrentThemeInLocalStorage(newTheme);
            return newTheme;
          });
        },
      }}
    >
      {children}
    </ThemeContext.Provider>
  );
}
