import * as React from 'react';
import { events } from './events.ts';
import type { HeadFC, PageProps } from 'gatsby';
import Button from '../../components/Button';
import Layout from '../../components/Layout';
import BugsLogo from '../../svgs/bugs.svg';
import Card from '../../components/Card';

const EventsPage: React.FC<PageProps> = () => {
  const currDate = Date.now();
  const upcomingEvents = events.filter(({ date }) => date > currDate);
  const pastEvents = events.filter(({ date }) => date < currDate);
  return (
    <Layout>
      <h2 className='mt-2 font-bold text-4xl'>Events</h2>
      <div className='space-x-32 py-10'>
        <h1 className='mt-2 font-bold text-2xl'>Upcoming Events</h1>
        {upcomingEvents.map(({ title, date, description, cover }) => (
          <div key={title}>
            <h1>{title}</h1>
            <p>{description}</p>
            <p>Date: {date.toLocaleDateString()}</p>
            <img src={cover} alt='' />
          </div>
        ))}
        <h1 className='mt-2 font-bold text-2xl'>Past Events</h1>
        {pastEvents.map(({ title, date, description, cover }) => (
          <div key={title}>
            <h1>{title}</h1>
            <p>{description}</p>
            <p>Date: {date.toLocaleDateString()}</p>
            <img src={cover} alt='' />
          </div>
        ))}
      </div>
    </Layout>
  );
};

export default EventsPage;
export const Head: HeadFC = () => <title>Events</title>;
