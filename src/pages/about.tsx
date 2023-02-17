import * as React from 'react';
import type { HeadFC, PageProps } from 'gatsby';
import Layout from '../components/Layout';
import Card from '../components/Card';
import { team, TeamMember } from '../data/team';

const TeamMemberCard: React.FC<TeamMember> = ({ name, description, profileImg }) => (
  <Card shadow='none'>
    <div className='-m-8 mb-0'>
      <img className='w-full h-64 rounded-t-lg object-cover' src={profileImg} alt='' />
    </div>
    <h3 className='mt-6 text-xl font-bold'>{name}</h3>
    <p className='mt-2'>{description}</p>
  </Card>
);

const AboutPage: React.FC<PageProps> = () => (
  <Layout>
    <h1 className='text-4xl font-bold'>About Us</h1>
    <p className='mt-8'>
      BUGS is the premier open source club at NYU; we advocate for the ideals of open source via
      first-hand experience of students having an exciting and inclusive environment for them to
      develop their own projects, work together with other members on larger projects, and take
      their skills to contribute to pre-existing open source projects.
    </p>
    <h2 className='mt-16 text-4xl font-bold'>Executive Board</h2>
    <div className='mt-8 mb-16 grid gap-8 grid-cols-1 sm:grid-cols-2 lg:grid-cols-3'>
      {team.map((teamMember) => (
        <TeamMemberCard key={teamMember.name} {...teamMember} />
      ))}
    </div>
  </Layout>
);

export default AboutPage;
export const Head: HeadFC = () => <title>Events</title>;
