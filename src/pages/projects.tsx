import * as React from 'react';
import type { HeadFC, PageProps } from 'gatsby';
import Button from '../components/Button';
import Card from '../components/Card';
import Layout from '../components/Layout';
import { GitHub } from 'iconoir-react';

const ProjectsPage: React.FC<PageProps> = () => (
  <Layout>
    <div className='max-w-5xl mx-auto px-8 flex flex-col py-8'>
      <h2 className='text-4xl font-bold'>Projects</h2>
      <p className='mt-4'>
        BUGS is meant to be a collaborative and inclusive environment for everyone. We&apos;re
        always welcome to hear your ideas and work on new projects. Here are some past projects we
        have worked on.
      </p>
      <div className='mt-12 grid grid-cols-1 gap-4 md:grid-cols-2'>
        <Card shadow='normal' link='https://nyusyllabi.com/'>
          <div className='h-full flex flex-col'>
            <h2 className='text-xl font-bold'>NYU Syllabi</h2>
            <p className='text-violet-600'>Repository of Syllabi for NYU schools</p>
            <p className='grow mt-4'>
              NYU Syllabi is a place to find and upload syllabi for different NYU classes across all
              schools.
            </p>
            <a
              className='mt-6 justify-self-end'
              href='https://github.com/BUGS-NYU/nyu-syllabi/'
              target='_blank'
              rel='noopener noreferrer'
            >
              <Button className='w-full flex gap-2 justify-center '>
                <GitHub className='inline-block' /> View Github
              </Button>
            </a>
          </div>
        </Card>
        <Card shadow='normal' link='https://nyucswiki.com/'>
          <div className='h-full flex flex-col'>
            <h2 className='text-xl font-bold'>NYU CS Wiki</h2>
            <p className='text-violet-600'>Guide for all NYU CS Students</p>
            <p className='grow mt-4'>
              The NYU CS Wiki provides guidance and resources for NYU CS students at Tandon and CAS.
              It is a collaborative effort by students, for students, that gives detailed
              information on different topics including competitive programming, internships, clubs,
              and more.
            </p>
            <a
              className='mt-6 justify-self-end'
              href='https://github.com/BUGS-NYU/nyu-cs-wiki/'
              target='_blank'
              rel='noopener noreferrer'
            >
              <Button className='w-full flex gap-2 justify-center'>
                <GitHub className='inline-block' /> View Github
              </Button>
            </a>
          </div>
        </Card>
        <Card shadow='normal' link='https://bugsnyu.com/'>
          <div className='h-full flex flex-col'>
            <h2 className='text-xl font-bold'>BUGS Website</h2>
            <p className='text-violet-600'>Website For The Club</p>
            <p className='grow mt-4'>
              The website is built from scratch, using React, to be a one-stop-shop for information
              about the open source club. It provides information about what the club is for, the
              projects we work on, and upcoming events. We hope to constantly update the website
              with features.
            </p>
            <a
              className='mt-6'
              href='https://github.com/BUGS-NYU/bugs-website'
              target='_blank'
              rel='noopener noreferrer'
            >
              <Button className='w-full flex gap-2 justify-center'>
                <GitHub className='inline-block' /> View Github
              </Button>
            </a>
          </div>
        </Card>
        <Card shadow='normal' link='https://nyu.a1liu.com/api/'>
          <div className='h-full flex flex-col'>
            <h2 className='text-xl font-bold'>Schedge API</h2>
            <p className='text-violet-600'>Course API for NYU</p>
            <p className='grow mt-4'>
              Schedge is an open source API to NYU&apos;s course catalog, geared at eventually
              helping NYU students plan their courses easier and faster. Our goal with this API is
              to make it easier for students to plan out their schedules, and eventually to also do
              some of that for them
            </p>
            <a
              className='mt-6 justify-self-end'
              href='https://github.com/A1Liu/schedge'
              target='_blank'
              rel='noopener noreferrer'
            >
              <Button className='w-full flex gap-2 justify-center'>
                <GitHub className='inline-block' /> View Github
              </Button>
            </a>
          </div>
        </Card>
      </div>
    </div>
  </Layout>
);

export default ProjectsPage;

export const Head: HeadFC = () => <title>Projects</title>;
