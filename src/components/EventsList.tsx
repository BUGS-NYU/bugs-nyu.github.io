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
  // Slice events array if count is provided
  events = events.slice(0, count);
  if (events.length === 0) return null;

  return (
    // Grid layout: 1 column on mobile, 2 on medium screens, 3 on large
    <div className='grid gap-8 grid-cols-1 md:grid-cols-2 lg:grid-cols-3'>
      {events.map((event) => {
        const hasOwnPage = event.imgsList || event.shortDescription;
        const isPastEvent = new Date(event.date) < new Date();

        return (
          <Card 
            shadow='none' 
            link={hasOwnPage ? `/event?index=${event.eventIndex}` : undefined} 
            key={event.title}
          >
            {/* Event image container */}
            <div className='-mx-8 -mt-8'>
              <img 
                className='w-full h-[225px] object-cover rounded-t-lg' 
                src={event.cover} 
                alt='' 
              />
            </div>

            {/* Card content wrapper */}
            <div className='p-4'>
              {/* Title and view button container */}
              <div className='flex justify-between items-start mb-4'> 
                <h3 className='text-xl font-bold leading-tight'>{event.title}</h3> 
                {hasOwnPage && (
                  <button className='ml-4 group-hover:bg-neutral-600 border-2 px-3 py-1 text-sm rounded-md transition-colors'>
                    View
                  </button>
                )}
              </div>

              {/* Event details for upcoming events */}
              {!isPastEvent && (
                <ul className='text-zinc-600 dark:text-zinc-400 space-y-2 mb-4'>
                  <li className='flex items-center gap-x-2'>
                    <Clock className='flex-shrink-0 h-5 w-5' />
                    <span>{getDateText(event)}</span>
                  </li>
                  <li className='flex items-center gap-x-2'>
                    <PinAlt className='flex-shrink-0 h-5 w-5' />
                    <span>{event.location}</span>
                  </li>
                </ul>
              )}

              {/* Event description */}
              <p className='text-sm leading-relaxed'>{event.description}</p>
            </div>
          </Card>
        );
      })}
    </div>
  );
};

export default EventsList;
