import * as React from 'react';
import type { HeadFC, PageProps } from 'gatsby';
import Layout from '../components/Layout';

const AboutPage: React.FC<PageProps> = () => (
  <Layout>
    <h2 className='text-4xl font-bold'>About Us</h2>
    <p className='mt-2 mb-4'>
      BUGS is the premier open source club at NYU; we advocate for the ideals of open source via
      first-hand experience of students having an exciting and inclusive environment for them to
      develop their own projects, work together with other members on larger projects, and take
      their skills to contribute to pre-existing open source projects.
    </p>
    <h2 className='text-4xl font-bold'>Meet Executive Board</h2>
    <div className='mt-8 mb-16 grid gap-12 grid-cols-1 sm:grid-cols-3'></div>
  </Layout>
);

export default AboutPage;
export const Head: HeadFC = () => <title>Events</title>;
