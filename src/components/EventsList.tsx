import { Clock, PinAlt } from 'iconoir-react';
import React from 'react';
import { Event } from '../data/events';
import Card from './Card';

interface EventsListProps {
  events: Event[];
  count?: number;
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
            <ul className='text-zinc-600'>
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
