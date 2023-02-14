import aneesh from '../images/team/aneesh.jpg';
import calvin from '../images/team/calvin.jpg';
import laurel from '../images/team/laurel.jpg';
import julius from '../images/team/julius.jpg';

export interface TeamMember {
  name: string;
  description: string;
  role: string;
  profileImg: string;
}

export const team: TeamMember[] = [
  {
    name: 'Aneesh Maganti',
    role: 'President',
    description:
      'Aneesh is a junior studying CS at Tandon. He really enjoys contributing to and playing with emulators, rock climbing, and occasionally doing music production 🦔.',
    profileImg: aneesh,
  },
  {
    name: 'Calvin Tian',
    role: 'Vice President',
    description:
      'Calvin is a junior studying CS at Tandon. Born in California, he enjoys automation and cats 😺!',
    profileImg: calvin,
  },
  {
    name: 'Laurel Xiang',
    role: 'Treasurer',
    description: "Laurel's description!",
    profileImg: laurel,
  },
  {
    name: 'Julius Nedzinskas',
    role: 'Secretary',
    description:
      'Julius is a senior studying CS at CAS; enjoys various competitive sports like basketball and table tennis, he also enjoys New York’s pizza and cultural life offerings.',
    profileImg: julius,
  },
];
