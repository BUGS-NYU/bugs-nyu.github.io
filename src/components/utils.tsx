import React, { createContext, PropsWithChildren, useContext, useState } from 'react';

const LOCAL_STORAGE_THEME_KEY = 'bugsTheme';

type ThemeType = 'dark' | 'light';

type ThemeContextType = {
  currentTheme: ThemeType;
  toggleCurrentTheme: () => void;
};

function getCurrentThemeFromLocalStorage(): ThemeType {
  return (localStorage.getItem(LOCAL_STORAGE_THEME_KEY) as ThemeType) ?? 'light';
}

function setCurrentThemeInLocalStorage(themeType: ThemeType) {
  localStorage.setItem(LOCAL_STORAGE_THEME_KEY, themeType);
}

const ThemeContext = createContext<ThemeContextType>({
  currentTheme: getCurrentThemeFromLocalStorage(),
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
