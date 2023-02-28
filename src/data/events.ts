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
    description: 'Join us and learn about what BUGS@NYU is and meet the e-board!',
    date: new Date('February 17, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/meet-and-greet.gif',
  },
  {
    title: 'Git Workshop',
    description:
      'Customize your GitHub profile while learning about the Git version control system.',
    date: new Date('February 24, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/git-workshop.gif',
  },
  {
    title: 'Web Scraping Workshop',
    description: 'Learn about web scraping with Playwright.',
    date: new Date('March 10, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/scraping.jpeg',
  },
  {
    title: 'Web Development Workshop',
    description: 'Build your own website in React in our hands-on workshop.',
    date: new Date('March 24, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/web-dev.jpeg',
  },
  {
    title: 'Club Project: Part 1',
    description: 'TBD',
    date: new Date('April 7, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/tbd.png',
  },
  {
    title: 'Club Project: Part 2',
    description: 'TBD',
    date: new Date('April 21, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/tbd.png',
  },
  {
    title: 'End of semester party!',
    description: 'Join us for an end of semester get-together!',
    date: new Date('May 5, 2023'),
    startTime: '6 PM',
    endTime: '8 PM',
    location: 'WWH Room 101',
    cover: '/images/events/tbd.png',
  },
];
