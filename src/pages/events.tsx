import * as React from 'react';
import type { HeadFC, PageProps } from 'gatsby';
import Button from '../components/Button';
import NavBar from '../components/NavBar';
import BugsLogo from '../svgs/bugs.svg';
import Card from '../components/Card';

const EventsPage: React.FC<PageProps> = () => {
  return (
    <div className='min-h screen antialiased'>
      <NavBar />
      <main className='mx-auto man-w-5xl px-8'>
        <div>
          <h1 className='text-8xl'>Events</h1>
        </div>
        <div className='flex space-x-32 items-center py-10'>
          <iframe
            src='https://calendar.google.com/calendar/embed?height=600&wkst=1&bgcolor=%23ffffff&ctz=America%2FNew_York&src=MXJnMXZhOGhpamttNzMydGE0ajQ0bGJjaDRAZ3JvdXAuY2FsZW5kYXIuZ29vZ2xlLmNvbQ&src=Y19iZ2NjZWtsYjQ5b2diMjBpNmExZTc2OHZ0Z0Bncm91cC5jYWxlbmRhci5nb29nbGUuY29t&src=ZW4udXNhI2hvbGlkYXlAZ3JvdXAudi5jYWxlbmRhci5nb29nbGUuY29t&color=%23795548&color=%23A79B8E&color=%230B8043'
            width={'800'}
            height={'600'}
            scrolling={'no'}
          ></iframe>
        </div>
      </main>
    </div>
  );
};

export default EventsPage;
export const Head: HeadFC = () => <title>Events</title>;
