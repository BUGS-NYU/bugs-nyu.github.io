import * as React from 'react';
import type { HeadFC, PageProps } from 'gatsby';
import Button from '../components/Button';
import Card from '../components/Card';
import Layout from '../components/Layout';
import { GitHub } from 'iconoir-react';
import { PROJECTS } from '../data/projects';

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
        {PROJECTS.map(({ name, summary, description, url, githubUrl }) => (
          <Card key={name} shadow='normal' link={url}>
            <div className='h-full flex flex-col'>
              <h2 className='text-xl font-bold'>{name}</h2>
              <p className='text-violet-600'>{summary}</p>
              <p className='grow mt-4'>{description}</p>
              <a
                className='mt-6 justify-self-end'
                href={githubUrl}
                target='_blank'
                rel='noopener noreferrer'
              >
                <Button className='w-full flex gap-2 justify-center '>
                  <GitHub className='inline-block' /> View Github
                </Button>
              </a>
            </div>
          </Card>
        ))}
      </div>
    </div>
  </Layout>
);

export default ProjectsPage;

export const Head: HeadFC = () => <title>Projects</title>;
