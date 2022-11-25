import React from 'react';
import NavBar from './NavBar.tsx';

const Layout: React.FC<{ children: JSX.Element }> = ({ children }) => (
  <div className='min-h-screen antialiased'>
    <NavBar />
    <main className='mx-auto max-w-5xl px-8'>{children}</main>
  </div>
);

export default Layout;
