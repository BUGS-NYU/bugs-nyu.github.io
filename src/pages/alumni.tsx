import * as React from 'react';
import { HeadFC, PageProps } from 'gatsby';
import Layout from '../components/Layout';
import { alumni } from '../data/alumni';

const AlumniPage: React.FC<PageProps> = () => {
  return (
    <Layout>
      <div className='max-w-5xl mx-auto px-8 flex flex-col py-8'>
        <h1 className='text-4xl font-bold'>Alumni</h1>
        <p className='mt-4 mb-4'>
          BUGS is a recent club at NYU but has amassed a long, interesting (and sometimes rocky!)
          history. Listed here are the alumni who have contributed to this club or have been a part
          of it in some way.
        </p>
        <div className='mt-4 mb-8'>
          {alumni.map((alum) => (
            <p className='mb-4' key={alum.name}>
              <b>{alum.name}</b>: {alum.description}
            </p>
          ))}
        </div>
      </div>
    </Layout>
  );
};

export default AlumniPage;
export const Head: HeadFC = () => <title>About</title>;
