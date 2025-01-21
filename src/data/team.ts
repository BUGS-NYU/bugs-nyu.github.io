export interface TeamMember {
  name: string;
  description: string;
  profileImg: string;
  role: string;
  interests?: string[];
}

export const TEAM: TeamMember[] = [
  {
    name: 'Abigail Zhou',
    description:
      'Abigail is a senior majoring in CS at CAS. She enjoys trying new restaurants and running in her free time!',
    profileImg: '/images/team/abigal.jpg',
    role: 'President',
    interests: ["Operating Systems", "Machine Learning", "Finance"]
  },
  {
    name: 'Alex Ying',
    description:
      'Alex is a senior studying CS at Tandon. He enjoys skiing, rock climbing, doing escape rooms in his free time. He is currently learning how to juggle.',
    profileImg: '/images/team/alexyi.jpg',
    role: 'Lead Event Coordinator',
    interests: ["Cool Algorithms"]
  },
   {
    name: 'Rishabh Verma',
    description:
      'Rishabh is a 2nd year MS CS student at NYU Tandon. In his free time, he likes to learn more about algorithmic trading strategies',
    profileImg: '/images/team/rishabh.jpg',
    role: 'Lead Developer',
    interests: ["Financial Markets", "Systems Design"]
  },
  {
    name: "Alex Jia",
    description: "Alex, a Sophomore majoring in computer science and mathematics at NYU CAS, explores the intersection of image processing and machine learning. Outside of academics, Alex enjoys discovering local restaurants and spending time with friends.",
    profileImg: "/images/team/alexj.jpg",
    role: "Developer",
    interests: ["Image Processing", "Machine Learning"]
  },
  {
    name: 'Grace He',
    description: 
      'Grace is a junior studying Applied Psychology at Steinhardt and CS at CAS from Toronto, Canada. In her free time, she enjoys trying out new restaurants and matcha places 🍵',
    profileImg: '/images/team/grace.jpg',
    role: 'Event Coordinator',
  },
  {
    name: 'Aryan Rai',
    description: 
      'Aryan is a second-year master\'s student in CS at Tandon. He’s currently exploring the intersection of artificial intelligence and financial technology, focusing on how AI can transform the finance industry. In his free time, Aryan enjoys trekking, playing badminton, and seeking out new experiences around New York.',
    profileImg: '/images/team/aryan.jpg',
    role: 'Event Coordinator',
    interests: ["Finance", "Machine Learning"]
  },
  {
    name: 'Angela Liu',
    description: 
      'Angela is a junior at Stern studying finance and data science from Massachusetts. In her free time, she enjoys cute lattes and gaming.',
    profileImg: '/images/team/angela.jpg',
    role: 'Event Coordinator',
  },
  {
    name: 'Sewon Kim',
    description:
      'As a passionate musician who has been composing and performing on the clarinet from an early age, Sewon has a great interest in the art of creation. For this reason, Sewon believes that computer science means more than simple coding as it is a form of art, built on inspiration and innovations.',
    profileImg: '/images/team/sewon.jpg',
    role: 'Website Designer',
  },
  {
    name: 'Isha Gopal',
    description: 'Isha is a junior studying CS at CAS, minoring in Economics and Film. In her free time, she\'s either dancing, drawing, or playing video games!',
    profileImg: '/images/team/isha.jpg',
    role: 'Graphic Designer'
  },
  {
    name: 'Riley Dou',
    description: 'Riley is a junior studying CS at Tandon. Born near the brown waters of Galveston, Texas, she enjoys dancing and skiing, and really really really likes dogs.',
    profileImg: '/images/team/riley.jpg',
    role: 'Communications | Photographer',
  },
  {
    name: 'Elaine Zou',
    description: 'Elaine is a junior majoring in Business and CS at CAS. Originally from Northern Virginia, she enjoys reading, drawing, and exploring New York in her free time. ',
    profileImg: '/images/team/elaine.jpg',
    role: 'Treasurer',
  },
  {
    name: 'Boyoon Han',
    description: 'Boyoon is a senior studying Data Science and Math at CAS. In her free time, she likes cafe-hopping, trying out new restaurants, and photography.',
    profileImg: '/images/team/boyoon.jpg',
    role: 'CS Wiki Writer',
  },
  {
    name: 'Faith Winford',
    description: 'Faith Winford is a sophomore studying CS and Philosophy at CAS. In her free time, she likes listening to music and going to concerts.',
    profileImg: '/images/team/faith.jpg',
    role: 'Website Maintainer',
    interests: ["AI", "Product Managment","Software Design"]
  },

];
