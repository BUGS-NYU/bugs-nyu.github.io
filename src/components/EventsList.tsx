import { Clock, PinAlt } from 'iconoir-react';
import React from 'react';
import { Event } from '../data/events';
import Card from './Card';

interface EventsListProps {
  events: Event[];
  count?: number;
}

const getDateText = (event: Event) => {
  const day = Intl.DateTimeFormat(undefined, {
    month: 'long',
    day: 'numeric',
    year: 'numeric',
  }).format(event.date);

  return `${day} at ${event.startTime} - ${event.endTime}`;
};

const EventsList = ({ events, count }: EventsListProps) => {
  events = events.slice(0, count);
  events = events.sort((a, b) => {
    return a.date.getTime() - b.date.getTime();
  });
  if (events.length === 0) return null;

  return (
    <>
      <div className='grid gap-12 grid-cols-1 sm:grid-cols-2'>
        {events.map((event) => (
          <Card shadow='none' key={event.title}>
            <div className='-m-8 mb-0'>
              <img className='w-full h-48 rounded-t-lg object-cover' src={event.cover} alt='' />
            </div>
            <h3 className='mt-6 text-xl font-bold'>{event.title}</h3>
            <ul className='text-zinc-600 dark:text-zinc-400'>
              <li className='my-2 flex gap-x-2'>
                <Clock className='flex-shrink-0 inline-block' />
                {getDateText(event)}
              </li>
              <li className='my-2 flex gap-x-2'>
                <PinAlt className='flex-shrink-0 inline-block' />
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

export default EventsList;
