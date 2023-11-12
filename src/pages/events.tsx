import * as React from 'react';
import { Event, EVENTS } from '../data/events';
import type { HeadFC, PageProps } from 'gatsby';
import Layout from '../components/Layout';
import EventsList from '../components/EventsList';

const EventsPage: React.FC<PageProps> = () => {
  const currDate = new Date().setHours(0, 0, 0, 0);
  const upcomingEvents = EVENTS.filter(({ date }: Event) => date.getTime() >= currDate).sort(
    (a: Event, b: Event) => a.date.getTime() - b.date.getTime(),
  );
  const pastEvents = EVENTS.filter(({ date }: Event) => date.getTime() < currDate).sort(
    (a: Event, b: Event) => b.date.getTime() - a.date.getTime(),
  );

  return (
    <Layout>
      <div className='max-w-5xl mx-auto px-8 flex flex-col py-8'>
        <>
          {upcomingEvents.length > 0 ? (
            <>
              <h2 className='mb-4 text-2xl font-bold'>Upcoming Events</h2>
              <EventsList events={upcomingEvents} />
            </>
          ) : null}
        </>
        <>
          {pastEvents.length > 0 ? (
            <>
              <h2 className='mt-8 mb-4 text-2xl font-bold'>Past Events</h2>
              <EventsList events={pastEvents} />
            </>
          ) : null}
        </>
      </div>
    </Layout>
  );
};

export default EventsPage;
export const Head: HeadFC = () => <title>Events</title>;
