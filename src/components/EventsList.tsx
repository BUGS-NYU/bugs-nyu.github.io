import { Clock, PinAlt } from 'iconoir-react';
import React from 'react';
import { Event } from '../data/events';
import Card from './Card';

interface EventsListProps {
  events: Event[];
  count?: number;
}

export const getDateText = (event: Event) => {
  const day = Intl.DateTimeFormat(undefined, {
    month: 'long',
    day: 'numeric',
    year: 'numeric',
  }).format(event.date);

  return `${day} at ${event.startTime} - ${event.endTime}`;
};

const EventsList = ({ events, count }: EventsListProps) => {
  events = events.slice(0, count);
  if (events.length === 0) return null;

  return (
    <>
      <div className='grid gap-12 grid-cols-1 sm:grid-cols-2'>
        {events.map((event) => {
          /* If imgsList or shortDescription is defined, this event will have its own page */
          const hasOwnPage = event.imgsList || event.shortDescription;

          return <Card shadow='none' 
              link={hasOwnPage ? `/event?index=${event.eventIndex}` : undefined} 
              key={event.title}>
            <div className='-m-8 mb-0'>
              <img className='w-full h-48 rounded-t-lg object-cover' src={event.cover} alt='' />
            </div>
            <div className='flex justify-between items-center p-2 pt-3'> 
              <h3 className='text-xl font-bold'>{event.title}</h3> 
              {hasOwnPage ? <div className='group-hover:bg-neutral-600 border-2 px-3 py-2 text-lg rounded-md transition-colors'> View </div> : null}
            </div>
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
        })}
      </div>
    </>
  );
};

export default EventsList;
