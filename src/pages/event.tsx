import * as React from 'react';
import { Event, EVENTS } from '../data/events';
import type { HeadFC, PageProps } from 'gatsby';
import Layout from '../components/Layout';

const EventsPage: React.FC<PageProps> = ({ location }) => {
    // get event index via query var
    const queryParams = new URLSearchParams(location.search);
    const index = parseInt( queryParams.get('index') ?? '0' );
    if (isNaN(index) || index < 0 || index >= EVENTS.length) {
        return <Layout> <h1> Error: Invalid page </h1> </Layout>;
    }

    // get event data
    const event = EVENTS[index];

    return (
        <Layout>
            <div className='max-w-5xl mx-auto px-8 flex flex-col py-8'>
                <h1> {JSON.stringify(event)} </h1>
            </div>
        </Layout>
    );
};

export default EventsPage;

// TODO: edit the page title accordingly
export const Head: HeadFC = () => <title>Events</title>;
