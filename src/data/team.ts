export interface TeamMember {
  name: string;
  description: string;
  profileImg: string;
  role: string;
}

export const TEAM: TeamMember[] = [
  {
    name: 'Abigal Zhou',
    description:
      'Abigail is a junior majoring in CS at CAS with an interest in operating systems and machine learning. She’s currently exploring the fintech space and enjoys trying new restaurants and running in her free time!',
    profileImg: '/images/team/abigal.jpg',
    role: 'President',
  },
  {
    name: 'Alex Ying',
    description:
      'Alex is a Junior studying CS in Tandon. He enjoys skiing, rock climbing, and learning about cool algorithms. He is currently teaching himself how to cook (with mixed results).',
    profileImg: '/images/team/alex.jpg',
    role: 'Lead Event Coordinator',
  },
  {
    name: 'Laurel Xiang',
    description:
      'Laurel is a senior studying CS and DS at CAS and is the trea. In her free time, she enjoy cycling, climbing, and contributing to projects.',
    profileImg: '/images/team/laurel.jpg',
    role: 'Treasurer',
  },
  {
    name: 'Julius Nedzinskas',
    description:
      'Julius is a graduate student studying Computing, Entrepreneurship and Innovation; he enjoys various competitive sports like basketball and table tennis, he also enjoys New York’s pizza and cultural life offerings.',
    profileImg: '/images/team/julius.jpg',
    role: 'Project Lead',
  },
  {
    name: 'David Mo',
    description:
      'David is a junior studying CS at CAS. He’s New York born and raised and is interested in the intersection between programming and design.',
    profileImg: '/images/team/david.jpg',
    role: 'Event Coordinator',
  },
  {
    name: 'Joshua Le',
    description:
      'Joshua is a second-year undergraduate at CAS studying CS. He’s interested in everything: Software Engineering and UI/UX. Outside of school and work, he enjoys playing chess.',
    profileImg: '/images/team/josh.jpg',
    role: 'Project Lead',
  },
];
