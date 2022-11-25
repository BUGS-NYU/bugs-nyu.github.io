import * as React from 'react';
import type { HeadFC, PageProps } from 'gatsby';
import Button from '../components/Button';
import BugsLogo from '../svgs/bugs.svg';
import Card from '../components/Card';
import Layout from '../components/Layout';

const ProjectsPage: React.FC<PageProps> = () => (
  <Layout>
    <h2 className='text-4xl font-bold'>Projects</h2>
    <p className='mt-2'>
      BUGS is meant to be a collaborative and inclusive environment for everyone. We’re always
      welcome to hear your ideas and work on new projects. Here are some past projects we have
      worked on.
    </p>
    <div className='mt-8 grid grid-cols-1 gap-4 md:grid-cols-2'>
      <Card shadow='normal'>
        <div className='flex flex-col'>
          <h2 className='text-xl font-bold'>BUGS Website</h2>
          <p className='text-violet-600'>Website For The Club</p>
          <p className='mt-4'>
            The website is built from scratch, using React, to be a one-stop-shop for information
            about the OpenSource Club. It provides information about what the club is for, the
            projects we work on, and upcoming events. We hope to constantly update the website with
            features.
          </p>
          <a className='mt-6' href='https://github.com/BUGS-NYU/bugs-website'>
            <Button className='w-full'>View Github</Button>
          </a>
        </div>
      </Card>
      <Card shadow='normal'>
        <div className='flex flex-col'>
          <h2 className='text-xl font-bold'>Schedge API</h2>
          <p className='text-violet-600'>Course API for NYU</p>
          <p className='mt-4'>
            Schedge is an open source API to NYU's course catalog, geared at eventually helping NYU
            students plan their courses easier and faster. Our goal with this API is to make it
            easier for students to plan out their schedules, and eventually to also do some of that
            for them
          </p>
          <a className='mt-6' href='https://github.com/A1Liu/schedge'>
            <Button className='w-full'>View Github</Button>
          </a>
        </div>
      </Card>
    </div>
  </Layout>
);

export default ProjectsPage;

export const Head: HeadFC = () => <title>Projects</title>;
