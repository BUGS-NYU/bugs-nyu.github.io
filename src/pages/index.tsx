import * as React from 'react';
import { HeadFC, Link, PageProps } from 'gatsby';
import Button from '../components/Button';
import Layout from '../components/Layout';
import BugsLogo from '../svgs/bugs.svg';
import EventsList from '../components/EventsList';
import { EVENTS, Event } from '../data/events';
import { ArrowRight } from 'iconoir-react';

const currDate = new Date().setHours(0, 0, 0, 0);
const upcomingEvents = EVENTS.filter(({ date }: Event) => date.getTime() >= currDate);

const IndexPage: React.FC<PageProps> = () => (
  <Layout>
    <div className='max-w-5xl mx-auto px-8 flex space-x-32 items-center py-24 lg:py-28'>
      <div>
        <h1 className='text-5xl lg:text-8xl font-bold'>BUGS @ NYU</h1>
        <p className='mt-6'>
          NYU’s premier <span className='text-violet-600'>open source</span> club connecting
          students to create an inclusive environment to work on projects together.
        </p>
        <div className='mt-6 flex flex-col space-y-4 md:flex-row md:space-x-4 md:space-y-0'>
          <a href='https://discord.gg/75jgtXy7rz'>
            <Button variant='primary'>Join the Club</Button>
          </a>
          <Link to='/about'>
            <Button>Learn More</Button>
          </Link>
        </div>
      </div>
      <div className='hidden md:block'>
        <BugsLogo className='[&>path]:dark:fill-white' />
      </div>
    </div>

    <div className='bg-[#F9F9FF] dark:bg-neutral-800'>
      <div className='max-w-5xl mx-auto px-8 flex flex-col items-center py-24 lg:py-28 text-center'>
        <p className='text-violet-600 font-bold'>The Mission</p>
        <h2 className='mt-2 text-4xl font-bold'>Create, Contribute, Open Source</h2>
        <p className='mt-6 light:text-zinc-800 dark:text-white'>
          We aim to bring students together to create impactful projects and develop skills that
          matter. Learn from guest speakers, interactive workshops, and more.
        </p>
      </div>
    </div>


    <div className='max-w-5xl mx-auto px-8 flex-col py-24 lg:py-28'>
      <div className='items-center flex'>
        <div className=''>
          <p className='text-violet-600 font-bold'>Join Us</p>
          <h2 className='mt-2 text-4xl font-bold'>Upcoming Events</h2>
          <p className='mt-4 mb-12'>Take part in any of our upcoming events and workshops!</p>
        </div>
        <div className='hidden md:block h-80 w-80 ml-60'>
          <div className='object-contain'>
            <img src='/images/logo/feature.png' />
          </div>
        </div>
      </div>
      <EventsList events={upcomingEvents} count={2} />
      <div className='mt-8 flex justify-center'>
        <Link to='/events'>
          <Button variant='primary' className='flex gap-2'>
            View All <ArrowRight className='inline-block' />
          </Button>
        </Link>
      </div>
    </div>
  </Layout>
);

export default IndexPage;

export const Head: HeadFC = () => <title>Home Page</title>;
