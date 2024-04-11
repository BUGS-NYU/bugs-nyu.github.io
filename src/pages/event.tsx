import * as React from 'react';
import { Event, EVENTS } from '../data/events';
import type { HeadFC, PageProps } from 'gatsby';
import Layout from '../components/Layout';
import { Clock, PinAlt } from 'iconoir-react';
import { getDateText } from '../components/EventsList';
import Slider from '../components/Slider';

const EventsPage: React.FC<PageProps> = ({ location }) => {
    // get event index via query var
    const queryParams = new URLSearchParams(location.search);
    const index = parseInt( queryParams.get('index') ?? '0' );
    if (isNaN(index) || index < 0 || index >= EVENTS.length) {
        return <Layout> <h1> Error: Invalid page </h1> </Layout>;
    }

    // get event data
    const event = EVENTS[index];

    if (!event.imgsList) {
        return <Layout> <h1> Error: Invalid event - images not found </h1> </Layout>;
    }

    return (
        <Layout>
            <div className='max-w-5xl mx-auto px-8 flex flex-col py-8'>
                <h1 className='text-2xl'> {event.title} </h1>

                <ul className='text-zinc-600 dark:text-zinc-400 m-3'>
                    <li className='my-2 flex gap-x-2'>
                        <Clock className='flex-shrink-0 inline-block' />
                        {getDateText(event)}
                    </li>
                    <li className='my-2 flex gap-x-2'>
                        <PinAlt className='flex-shrink-0 inline-block' />
                        {event.location}
                    </li>
                </ul>

                <p className="mb-5"> {event.description} </p>

                <Slider>
                    {event.imgsList.map((imgSrc, imgIndex) => 
                    <img
                        src={imgSrc}
                        width="100%" height="auto"
                        key={imgIndex}
                    />)}
                </Slider>
            </div>
        </Layout>
    );
};

export default EventsPage;

// TODO: edit the page title accordingly
export const Head: HeadFC = () => <title>Events</title>;
