import meetAndGreet from '../../images/events/meet-and-greet.gif';

export interface Event {
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
    title: 'Web Development Workshop',
    description: 'Learn about the popular web development frameworks',
    date: new Date('February 24, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'TBD',
    cover: meetAndGreet,
  },
  {
    title: 'Git Workshop',
    description: 'Learn about the Git version control system',
    date: new Date('March 3, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'TBD',
    cover: meetAndGreet,
  },
  {
    title: 'Web Scraping Workshop',
    description: 'Learn about web scraping with Playwright',
    date: new Date('March 24, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'TBD',
    cover: meetAndGreet,
  },
  {
    title: 'End of semester party!',
    description: 'Last event of the semester with Bugs',
    date: new Date('May 5, 2023'),
    startTime: '6 PM',
    endTime: '8 PM',
    location: 'TBD',
    cover: meetAndGreet,
  },
];
