import * as React from 'react';
import { Event, events } from './events-data';
import type { HeadFC, PageProps } from 'gatsby';
import Layout from '../../components/Layout';
import Card from '../../components/Card';
import Location from '../../svgs/location.svg';
import Clock from '../../svgs/clock.svg';

interface EventsListProps {
  title: string;
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

const EventsList = ({ title, events }: EventsListProps) => {
  events = events.sort((a, b) => {
    return a.date.getTime() - b.date.getTime();
  });

  if (events.length === 0) return null;

  return (
    <>
      <h2 className='text-4xl font-bold'>{title}</h2>
      <div className='mt-8 mb-16 grid gap-12 grid-cols-1 sm:grid-cols-2'>
        {events.map((event) => (
          <Card shadow='none' key={event.title}>
            <div className='-m-8 mb-0'>
              <img className='w-full h-48 rounded-t-lg object-cover' src={event.cover} alt='' />
            </div>
            <h3 className='mt-6 text-xl font-bold'>{event.title}</h3>
            <ul className='text-zinc-600'>
              <li className='my-2 flex gap-x-2'>
                <Clock className='flex-shrink-0 inline-block' />
                {getDateText(event)}
              </li>
              <li className='my-2 flex gap-x-2'>
                <Location className='flex-shrink-0 inline-block' />
                {event.location}
              </li>
            </ul>
            <p className='mt-4'>{event.description}</p>
          </Card>
        ))}
      </div>
    </>
  );
};

const EventsPage: React.FC<PageProps> = () => {
  const currDate = new Date();
  const upcomingEvents = events.filter(({ date }) => date >= currDate);
  const pastEvents = events.filter(({ date }) => date < currDate);
  return (
    <Layout>
      <EventsList title='Upcoming Events' events={upcomingEvents} />
      <EventsList title='Past Events' events={pastEvents} />
    </Layout>
  );
};

export default EventsPage;
export const Head: HeadFC = () => <title>Events</title>;
