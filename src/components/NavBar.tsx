import classNames from 'classnames';
import { Link } from 'gatsby';
import React, { useState } from 'react';
import Button from './Button';

type NavBarElement = React.ElementRef<'header'>;
type NavBarProps = React.ComponentPropsWithoutRef<'header'>;

const NAV_LINKS = [
  { to: '/about', value: 'About us' },
  { to: '/projects', value: 'Projects' },
  { to: '/events', value: 'Events' },
];

const NavBar = React.forwardRef<NavBarElement, NavBarProps>(({ className, ...restProps }) => {
  const [isMobileMenuOpen, setIsMobileMenuOpen] = useState<boolean>(false);

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
            className='flex items-center px-3 py-2 border rounded border-indigo-700'
            onClick={toggleMobileMenu}
          >
            <svg
              className='fill-current h-3 w-3'
              viewBox='0 0 20 20'
              xmlns='http://www.w3.org/2000/svg'
            >
              <title>Menu</title>
              <path d='M0 3h20v2H0V3zm0 6h20v2H0V9zm0 6h20v2H0v-2z' />
            </svg>
          </button>
        </div>
        <div
          className={`${
            isMobileMenuOpen ? 'visible' : 'hidden'
          } w-full block flex-grow mt-2 lg:mt-0 lg:flex lg:items-center lg:w-auto lg:opacity-100 lg:visible`}
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
