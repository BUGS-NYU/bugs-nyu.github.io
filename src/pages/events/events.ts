import meetAndGreet from '../../images/events/meet-and-greet.gif';

interface Event {
  title: string;
  description: string;
  date: Date;
  startTime: string;
  endTime: string;
  location: string;
  cover: string;
}

export const events: Event[] = [
  {
    title: 'Meet and Greet',
    description: 'Come and learn about Bugs@NYU',
    date: new Date('February 17, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: '102 WW Hall',
    cover: meetAndGreet,
  },
  {
    title: 'Meet and Greet',
    description: 'Come and learn about Bugs@NYU',
    date: new Date('February 1, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: '102 WW Hall',
    cover: meetAndGreet,
  },
];
