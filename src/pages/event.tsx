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

    /* If imgsList or shortDescription is defined, this event will have its own page */
    const hasOwnPage = event.imgsList || event.shortDescription;
    if (!hasOwnPage) {
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

                {/* Description */}
                <p className="mb-5"> {event.shortDescription ?? event.description} </p>

                {/* Links */}
                {event.links && event.links.length > 0 ?
                <ul className="mb-4">
                    {event.links.map((link, linkIndex) => 
                    <li key={linkIndex}>
                        - <a href={link.url} className='text-lg text-blue-500 hover:underline'> {link.name} </a>
                    </li>)}
                </ul> : null}

                {/* Images */}
                {event.imgsList && event.imgsList.length > 0 ? 
                <Slider elementStyle={"flex items-center overflow-hidden h-44 sm:h-96 md:h-30rem"}>
                    {event.imgsList.map((imgSrc, imgIndex) => 
                    <img
                        src={imgSrc}
                        alt={event.imgsText ? event.imgsText[imgIndex] ?? "" : ""}
                        title={event.imgsText ? event.imgsText[imgIndex] ?? "" : ""}
                        width="100%" height="auto"
                        key={imgIndex}
                    />)}
                </Slider> : null}
            </div>
        </Layout>
    );
};

export default EventsPage;

// TODO: edit the page title accordingly
export const Head: HeadFC = () => <title>Events</title>;
