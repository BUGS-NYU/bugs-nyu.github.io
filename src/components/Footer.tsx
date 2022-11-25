import classNames from 'classnames';
import { Link } from 'gatsby';
import React from 'react';
import Button from './Button';
import GithubMark from '../svgs/github-mark.svg';
import DiscordMark from '../svgs/discord-mark.svg';
import EmailMark from '../svgs/email-mark.svg';

type FooterElement = React.ElementRef<'footer'>;
type FooterProps = React.ComponentPropsWithoutRef<'footer'>;

const SOCIAL_ICONS = [
  { to: '/', getMark: () => <GithubMark /> },
  { to: '/', getMark: () => <DiscordMark /> },
  { to: '/', getMark: () => <EmailMark /> },
];

const Footer = React.forwardRef<FooterElement, FooterProps>(({ className, ...restProps }) => (
  <footer className={className} {...restProps}>
    <div className='w-full h-24 bg-gray-100 flex flex-row items-center justify-center'>
      <div className='max-w-5xl w-full flex justify-between items-center space-x-32'>
        <div className='flex flex-row justify-between space-x-4'>
          {SOCIAL_ICONS.map(({ to, getMark }) => (
            <Link
              key={to}
              to={to}
              className='p-1 rounded-lg hover:bg-indigo-500 transition duration-10'
            >
              {getMark()}
            </Link>
          ))}
        </div>
        <div className='text-neutral-900 font-semibold'>
          <Link to='/' className='text-indigo-500'>
            Join us
          </Link>{' '}
          now and contribute to this website!
        </div>
      </div>
    </div>
  </footer>
));

export default Footer;
