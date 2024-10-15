import * as React from 'react';
import { graphql, HeadFC, PageProps, useStaticQuery } from 'gatsby';
import Layout from '../components/Layout';
import Card from '../components/Card';
import { TEAM, TeamMember } from '../data/team';

const TeamMemberCard: React.FC<TeamMember> = ({ name, description, profileImg, role }) => (
  <Card shadow='none'  className='flex flex-col items-center'>
    <div className='w-full h-64 overflow-hidden rounded-t-lg'>
      <img className='w-full h-full object-cover' src={profileImg} alt='' />
    </div>
    <h3 className='mt-6 text-xl font-bold'>{name}</h3>
    <h3 className=' text-xl'>{role}</h3>
    <p className='mt-2'>{description}</p>
  </Card>
);

const AboutPage: React.FC<PageProps> = () => {
  const data = useStaticQuery(
    graphql`
      {
        allFile(filter: { sourceInstanceName: { eq: "members" } }) {
          nodes {
            name
            fields {
              content
            }
          }
        }
      }
    `,
  );

  const membersNames: string[] = data.allFile.nodes.reduce((arr: string[], curr: any) => {
    if (curr.name !== 'netid1234' && curr.name !== 'README') {
      const content = curr.fields.content;
      arr.push(content);
    }
    return arr;
  }, []);
  membersNames.sort((a, b) => a.toLowerCase().localeCompare(b.toLowerCase()));

  const formatter = new Intl.ListFormat('en', { style: 'long', type: 'conjunction' });

  return (
    <Layout>
      <div className='max-w-5xl mx-auto px-8 flex flex-col py-8'>
        <h1 className='text-4xl font-bold'>About Us</h1>
        <p className='mt-4'>
          BUGS is the premier open source club at NYU; we advocate for the ideals of open source via
          first-hand experience of students having an exciting and inclusive environment for them to
          develop their own projects, work together with other members on larger projects, and take
          their skills to contribute to pre-existing open source projects.
        </p>
        <h2 className='mt-12 text-4xl font-bold'>Executive Board</h2>
        <div className='mt-4 grid gap-8 grid-cols-1 sm:grid-cols-2 lg:grid-cols-3'>
          {TEAM.map((teamMember) => (
            <TeamMemberCard key={teamMember.name} {...teamMember} />
          ))}
        </div>
        <h2 className='mt-12 text-4xl font-bold'>Members</h2>
        <div className='mt-4 mb-16'>
          <p>
            A list of some of our active members (in alphabetical order):{' '}
            {formatter.format(membersNames)}
          </p>
          <p className='mt-4'>
            Want your name to be a part of this list? Make a{' '}
            <a
              className='text-purple-600 font-semibold'
              target='_blank'
              rel='noopener noreferrer'
              href='https://github.com/BUGS-NYU/bugs-nyu.github.io/tree/main/src/data/members'
            >
              pull request!
            </a>
          </p>
        </div>
      </div>
    </Layout>
  );
};

export default AboutPage;
export const Head: HeadFC = () => <title>About</title>;
