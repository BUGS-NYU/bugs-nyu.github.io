import { Link } from 'gatsby';
import React from 'react';
import Button from './Button';
import BugsLogo from '../svgs/bugs.svg';

const Hero = () => (
  <div className='flex space-x-32 items-center'>
    <div className='mt-8 lg:mt-24'>
      <h1 className='text-5xl lg:text-8xl font-bold'>BUGS @ NYU</h1>
      <p className='mt-6'>
        NYU’s premier <span className='text-violet-600'>open source</span> club connecting students
        to create an inclusive environment to work on projects together.
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
);

export default Hero;
