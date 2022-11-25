import classNames from 'classnames';
import { Link } from 'gatsby';
import React, { useState, useEffect } from 'react';
import Button from './Button';
import Close from '../svgs/close.svg';
import Menu from '../svgs/menu.svg';

type NavBarElement = React.ElementRef<'header'>;
type NavBarProps = React.ComponentPropsWithoutRef<'header'>;

const NAV_LINKS = [
  { to: '/about', value: 'About us' },
  { to: '/projects', value: 'Projects' },
  { to: '/events', value: 'Events' },
];

const NavBar = React.forwardRef<NavBarElement, NavBarProps>(({ className, ...restProps }) => {
  const [isMobileMenuOpen, setIsMobileMenuOpen] = useState<boolean>(false);

  useEffect(() => {
    const handleResize = () => setIsMobileMenuOpen(false);
    window.addEventListener('resize', handleResize);

    return () => {
      window.removeEventListener('resize', handleResize);
    };
  }, []);

  const toggleMobileMenu = () => setIsMobileMenuOpen((prev) => !prev);

  return (
    <header className={className} {...restProps}>
      <nav className='flex max-w-5xl mx-auto items-center justify-between flex-wrap p-8'>
        <div className='flex items-center flex-shrink-0 mr-6'>
          <Link to='/' className='font-bold text-l tracking-tight'>
            BUGS
          </Link>
        </div>
        <div className='block lg:hidden'>
          <button
            className='flex w-10 h-8 items-center justify-center border rounded border-indigo-700'
            onClick={toggleMobileMenu}
          >
            {isMobileMenuOpen ? <Close /> : <Menu />}
          </button>
        </div>
        <div
          className={`${
            isMobileMenuOpen ? 'h-44' : 'h-0'
          } w-full block truncate flex-grow mt-2 transition-height duration-100 lg:mt-0 lg:flex lg:items-center lg:w-auto lg:h-auto`}
        >
          <div className='lg:flex lg:flex-row lg:flex-grow lg:space-x-8'>
            {NAV_LINKS.map(({ to, value }) => (
              <Link key={value} to={to} className='block mb-4 lg:mb-0 lg:inline-block'>
                {value}
              </Link>
            ))}
          </div>
          <div>
            <a href='https://discord.gg/75jgtXy7rz'>
              <Button variant='primary' className='px-6'>
                Join
              </Button>
            </a>
          </div>
        </div>
      </nav>
    </header>
  );
});

export default NavBar;
