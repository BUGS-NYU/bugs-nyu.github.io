import React from 'react';
import { Discord, GitHub, Mail } from 'iconoir-react';

type FooterElement = React.ElementRef<'footer'>;
type FooterProps = React.ComponentPropsWithoutRef<'footer'>;

const SOCIAL_ICONS = [
  { to: 'https://github.com/BUGS-NYU', getMark: () => <GitHub /> },
  { to: 'https://discord.com/invite/75jgtXy7rz', getMark: () => <Discord /> },
  { to: 'mailto:bugsnyu@gmail.com', getMark: () => <Mail /> },
];

const Footer = React.forwardRef<FooterElement, FooterProps>(({ className, ...restProps }) => (
  <footer className='w-full bg-[#3D1E5B] text-white' {...restProps}>
    <div className='mx-auto max-w-5xl px-8 py-24 flex flex-col gap-12 items-start justify-between md:flex-row md:items-center md:gap-0'>
      <div className='flex flex-col gap-y-4'>
        <p className='text-xl font-bold'>BUGS @ NYU</p>
        <p>NYU’s premier open source club</p>
        <div className='flex flex-row gap-x-4'>
          {SOCIAL_ICONS.map(({ to, getMark }) => (
            <a key={to} href={to} target='_blank' rel='noopener noreferrer'>
              {getMark()}
            </a>
          ))}
        </div>
      </div>
      <p>
        <a
          href='https://discord.com/invite/75jgtXy7rz'
          className='text-purple-400 font-bold'
          target='_blank'
          rel='noopener noreferrer'
        >
          Join us
        </a>{' '}
        now and contribute to this website!
      </p>
    </div>
  </footer>
));

export default Footer;
