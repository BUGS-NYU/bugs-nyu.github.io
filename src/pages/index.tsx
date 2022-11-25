import * as React from 'react';
import { HeadFC, Link, PageProps } from 'gatsby';
import Button from '../components/Button';
import NavBar from '../components/NavBar';
import BugsLogo from '../svgs/bugs.svg';
import Card from '../components/Card';
import Footer from '../components/Footer';

const IndexPage: React.FC<PageProps> = () => {
  return (
    <div className='min-h-screen antialiased'>
      <NavBar />
      <main className='mx-auto max-w-5xl px-8'>
        <div className='flex space-x-32 items-center'>
          <div className='mt-24'>
            <h1 className='text-8xl font-bold'>BUGS @ NYU</h1>
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
            <BugsLogo />
          </div>
        </div>
        <div className='mt-16 pb-24 relative'>
          <p className='text-violet-600'>The Mission</p>
          <h2 className='mt-2 text-4xl font-bold'>Our Pillars</h2>
          <div className='mt-8 flex flex-col space-y-4 md:flex-row md:space-y-0 md:space-x-4'>
            <Card shadow='normal'>
              <h3 className='font-bold'>Open Source</h3>
              <p className='mt-2'>
                A form of licensing that celebrates open exchange, collaborative participation,
                transparency, and community-oriented development.
              </p>
            </Card>
            <Card shadow='normal'>
              <h3 className='font-bold'>Create</h3>
              <p className='mt-2'>
                Build useful and fun projects with other club members to solve problems and learn.
                Collaborate with other clubs on and off campus.
              </p>
            </Card>
            <Card shadow='normal'>
              <h3 className='font-bold'>Contribute</h3>
              <p className='mt-2'>
                If this is your first time contributing, take a look at the BUGS repository. Fork
                it, make pull requests, report issues and git good!!!
              </p>
            </Card>
          </div>
        </div>
      </main>
      <Footer />
    </div>
  );
};

export default IndexPage;

export const Head: HeadFC = () => <title>Home Page</title>;
