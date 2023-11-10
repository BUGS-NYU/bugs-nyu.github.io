export interface Event {
  title: string;
  description: string;
  date: Date;
  startTime: string;
  endTime: string;
  location: string;
  cover: string;
}

export const EVENTS: Event[] = [
  {
    title: 'BUGS Coding Session #3',
    description:
      'Join us on another coding session for BUGS open source projects. There will be free food!',
    date: new Date('November 10, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/coding-session-3.gif',
  },
  // {
  //   title: 'Git Workshop',
  //   description:
  //     'Customize your GitHub profile while learning about the Git version control system.',
  //   date: new Date('February 24, 2023'),
  //   startTime: '5 PM',
  //   endTime: '6 PM',
  //   location: 'WWH Room 101',
  //   cover: '/images/events/git-workshop.gif',
  // },
  // {
  //   title: 'Web Scraping Workshop',
  //   description: 'Learn about web scraping with Playwright.',
  //   date: new Date('March 24, 2023'),
  //   startTime: '5 PM',
  //   endTime: '6 PM',
  //   location: 'WWH Room 101',
  //   cover: '/images/events/scraping.jpeg',
  // },
  // {
  //   title: 'Web Development Workshop',
  //   description: 'Build your own website in React in our hands-on workshop.',
  //   date: new Date('March 31, 2023'),
  //   startTime: '5 PM',
  //   endTime: '6 PM',
  //   location: 'WWH Room 101',
  //   cover: '/images/events/web-dev.jpeg',
  // },
  // {
  //   title: 'Game Boy Emulation Workshop',
  //   description: 'Get a technical overview of emulation and learn how a Game Boy emulator is made.',
  //   date: new Date('April 7, 2023'),
  //   startTime: '5 PM',
  //   endTime: '6:30 PM',
  //   location: 'TBD',
  //   cover: '/images/events/game-boy.jpg',
  // },
  // {
  //   title: 'Club Project: Part 1',
  //   description: 'TBD',
  //   date: new Date('April 14, 2023'),
  //   startTime: '5 PM',
  //   endTime: '6 PM',
  //   location: 'WWH Room 101',
  //   cover: '/images/events/tbd.png',
  // },
  // {
  //   title: 'Club Project: Part 2',
  //   description: 'TBD',
  //   date: new Date('April 28, 2023'),
  //   startTime: '5 PM',
  //   endTime: '6 PM',
  //   location: 'WWH Room 101',
  //   cover: '/images/events/tbd.png',
  // },
  // {
  //   title: 'End of semester party!',
  //   description: 'Join us for an end of semester get-together!',
  //   date: new Date('May 5, 2023'),
  //   startTime: '6 PM',
  //   endTime: '8 PM',
  //   location: 'WWH Room 101',
  //   cover: '/images/events/tbd.png',
  // },
];
