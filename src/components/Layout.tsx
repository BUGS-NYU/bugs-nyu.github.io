import React, { PropsWithChildren } from 'react';
import NavBar from './NavBar';
import Footer from './Footer';
import { ThemeContextProvider, useThemeContext } from './utils';

const Layout = ({ children }: PropsWithChildren) => {
  const { currentTheme } = useThemeContext();

  return (
    <div className={`min-h-screen antialiased ${currentTheme}`}>
      <div className='light:bg-white dark:bg-zinc-900'>
        <NavBar />
        <main className='w-full min-h-[calc(100vh-12rem)] dark:text-white'>{children}</main>
        <Footer />
      </div>
    </div>
  );
};

const WrappedLayout = ({ children }: PropsWithChildren) => {
  return (
    <ThemeContextProvider>
      <Layout>{children}</Layout>
    </ThemeContextProvider>
  );
};

export default WrappedLayout;
