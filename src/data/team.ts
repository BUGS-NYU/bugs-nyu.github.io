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
      'Alex Ying is a Junior studying CS in Tandon. He enjoys skiing, rock climbing, and learning about cool algorithms. He is currently teaching himself how to cook (with mixed results).',
    profileImg: '/images/team/alexy.jpg',
    role: 'Lead Event Coordinator',
  },
  {
    name: 'Alex Jia',
    description:
      'Alex Jia is a freshman majoring in computer science and mathematics at CAS. They were born in Xi’an and raised in Seattle. They are interested in the intersection between image processing and machine learning. In their free time, they enjoy hanging out with friends, watching anime, and going to cons.',
    profileImg: '/images/team/alexj.jpg',
    role: 'Event Coordinator | Developer',
  },
  {
    name: 'Sewon Kim',
    description:
      'As a passionate musician who has been composing and performing on the clarinet from an early age, Sewon has a great interest in the art of creation. For this reason, Sewon believes that computer science means more than simple coding as it is a form of art, built of inspirations and innovations.',
    profileImg: 'images/team/abigal.jpg',
    role: 'Website Designer',
  },
  {
    name: 'Isha Gopal',
    description: 'Isha is a sophomore studying CS at CAS, minoring in Economics and Film. In her free time, she’s either dancing, drawing, or playing video games!',
    profileImg: 'images/team/isha.jpg',
    role: 'Graphic Designer'
  },
  {
    name: 'Riley Dou',
    description: 'Riley is a sophomore studying CS at Tandon. Born near the brown waters of Galveston, Texas, she enjoys dancing and skiing, and really really really likes dogs.',
    profileImg: 'images/team/riley.jpg',
    role: 'Communications | Photographer',
  },
  {
    name: 'Elaine Zou',
    description: 'Elaine is a sophomore majoring in Business and CS at CAS. Originally from northern Virginia, she enjoys reading, drawing, and exploring New York in her free time.',
    profileImg: 'images/team/elaine.jpg',
    role: 'Treasurer',
  },
  {
    name: 'Lawrence',
    description: 'Lawrence is a senior studying CS and Math at CAS. He likes abstract stuff. Besides coding, he also enjoys coffee brewing☕️ and singing🎤 a lot.',
    profileImg: 'images/team/lawrence.jpg',
    role: 'CS Wiki Writer',
  },
  {
    name: 'Faith Winford',
    description: 'Faith Winford is a freshman studying CS and Philosophy at CAS. She’s interested in the intersection of AI and ethics. In her free time she likes listening to music and going to conerts.',
    profileImg: 'images/team/faith.jpg',
    role: 'Website Maintainer',
  },

];
