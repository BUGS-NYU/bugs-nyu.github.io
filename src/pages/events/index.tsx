import * as React from 'react';
import { Event, events } from './events-data';
import type { HeadFC, PageProps } from 'gatsby';
import Layout from '../../components/Layout';
import Card from '../../components/Card';
import Location from '../../svgs/location.svg';
import Clock from '../../svgs/clock.svg';

interface EventsListProps {
  events: Event[];
}

const monthNames = [
  'January',
  'February',
  'March',
  'April',
  'May',
  'June',
  'July',
  'August',
  'September',
  'October',
  'November',
  'December',
];

const getDateText = (event: Event) => {
  const month = monthNames[event.date.getMonth()];
  const day = event.date.getDate();
  const year = event.date.getFullYear();
  const time = `${event.startTime} - ${event.endTime}`;
  return `${month} ${day}, ${year} at ${time}`;
};

const EventsList = ({ events }: EventsListProps) => {
  return (
    <div className='mb-8 grid grid-cols-1 gap-4 md:grid-cols-2'>
      {events.map((event) => (
        <Card shadow='normal' key={event.title}>
          <div className='-m-8 mb-0'>
            <img className='w-full h-48 rounded-t-lg object-cover' src={event.cover} alt='' />
          </div>
          <h3 className='mt-6 text-xl font-bold'>{event.title}</h3>
          <ul className='text-zinc-600'>
            <li className='my-2 flex gap-x-2'>
              <Location className='flex-shrink-0 inline-block' />
              {event.location}
            </li>
            <li className='my-2 flex gap-x-2'>
              <Clock className='flex-shrink-0 inline-block' />
              {getDateText(event)}
            </li>
          </ul>
          <p>{event.description}</p>
        </Card>
      ))}
    </div>
  );
};

const EventsPage: React.FC<PageProps> = () => {
  const currDate = new Date();
  const upcomingEvents = events.filter(({ date }) => date >= currDate);
  const pastEvents = events.filter(({ date }) => date < currDate);
  return (
    <Layout>
      <h1 className='font-bold text-4xl'>Events</h1>
      <p className='mt-2'>We'd love to have you join us at our events!</p>
      <h2 className='mt-8 mb-8 font-bold text-2xl'>Upcoming Events</h2>
      <EventsList events={upcomingEvents} />
      {pastEvents.length > 0 && (
        <>
          <h2 className='mb-8 font-bold text-2xl'>Past Events</h2>
          <EventsList events={pastEvents} />
        </>
      )}
    </Layout>
  );
};

export default EventsPage;
export const Head: HeadFC = () => <title>Events</title>;
