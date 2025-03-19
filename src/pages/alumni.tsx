import * as React from 'react';
import { HeadFC, PageProps } from 'gatsby';
import Layout from '../components/Layout';
import { OLD_ALUMNI, NEW_ALUMNI } from '../data/alumni';

const AlumniPage: React.FC<PageProps> = () => {
  const oldAlumniDesc = OLD_ALUMNI.sort((a, b) => (a.graduation < b.graduation ? 1 : -1));
  const newAlumniDesc = NEW_ALUMNI.sort((a, b) => (a.graduation < b.graduation ? 1 : -1));

  return (
    <Layout>
      <div className='max-w-5xl mx-auto px-8 flex flex-col py-8'>
        <h1 className='text-4xl font-bold'>Alumni</h1>
        <p className='mt-4 mb-4'>
          BUGS is a recent club at NYU but has amassed a long, interesting (and sometimes rocky!)
          history. Listed here are the alumni who have contributed to this club or have been a part
          of it somehow. It was founded in 2018 by Ananditha, David, and Nadira and the club ran until it fizzled 
          out around 2021. Later, Aneesh and Calvin attempted but failed to create the club Feature in late 2021 as a Tandon 
          branch of BUGS. In late 2022, Aneesh revived BUGS with the invaluable help from Calvin, Laurel, and David;
          Julius and Joshua joined the next semester in early 2023 for the first proper semester.
        </p>
        <div className='mt-4 mb-8'>
          {/* <hr className='my-8' /> */}
          {newAlumniDesc.map((alum) => (
            <div className='mb-4' key={alum.name}>
              <p className='font-bold'>
                {alum.name} ({alum.graduation}):
              </p>
              <div className='mx-4'>{alum.description}</div>
            </div>
          ))}
          <hr className='my-8' />
          {oldAlumniDesc.map((alum) => (
            <div className='mb-4' key={alum.name}>
              <p className='font-bold'>
                {alum.name} ({alum.graduation}):
              </p>
              <div className='mx-4'>{alum.description}</div>
            </div>
          ))}
        </div>
      </div>
    </Layout>
  );
};

export default AlumniPage;
export const Head: HeadFC = () => <title>About</title>;
