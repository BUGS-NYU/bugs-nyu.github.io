import React from 'react';
import NavBar from './NavBar';
import Footer from './Footer';

const Layout: React.FC<{ children: JSX.Element | JSX.Element[] }> = ({ children }) => (
  <div className='min-h-screen antialiased'>
    <NavBar />
    <main className='w-full min-h-[calc(100vh-12rem)]'>{children}</main>
    <Footer />
  </div>
);

export default Layout;
