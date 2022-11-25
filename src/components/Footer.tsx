import React from 'react';
import GithubMark from '../svgs/github-mark.svg';
import DiscordMark from '../svgs/discord-mark.svg';
import EmailMark from '../svgs/email-mark.svg';

type FooterElement = React.ElementRef<'footer'>;
type FooterProps = React.ComponentPropsWithoutRef<'footer'>;

const SOCIAL_ICONS = [
  { to: 'https://github.com/BUGS-NYU', getMark: () => <GithubMark /> },
  { to: 'https://discord.com/invite/75jgtXy7rz', getMark: () => <DiscordMark /> },
  { to: 'mailto:bugsnyu@gmail.com', getMark: () => <EmailMark /> },
];

const Footer = React.forwardRef<FooterElement, FooterProps>(({ className, ...restProps }) => (
  <footer className={className} {...restProps}>
    <div className='w-full h-24 bg-gray-100 flex flex-row items-center justify-center'>
      <div className='max-w-5xl w-full px-4 md:flex md:justify-between md:items-center md:space-x-32'>
        <div className='block flex max-w-xs mx-auto md:mx-0 flex-row justify-between space-x-4'>
          {SOCIAL_ICONS.map(({ to, getMark }) => (
            <a
              key={to}
              href={to}
              className='p-1 rounded-lg hover:bg-indigo-500 transition duration-10'
              target='_blank'
              rel='noopener noreferrer'
            >
              {getMark()}
            </a>
          ))}
        </div>
        <div className='block text-neutral-900 font-semibold mx-auto md:mx-0 max-w-fit mt-2 md:mt-0'>
          <a
            href='https://discord.com/invite/75jgtXy7rz'
            className='text-indigo-500'
            target='_blank'
            rel='noopener noreferrer'
          >
            Join us
          </a>{' '}
          now and contribute to this website!
        </div>
      </div>
    </div>
  </footer>
));

export default Footer;
