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
    date: new Date('March 24, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/scraping.jpeg',
  },
  {
    title: 'Web Development Workshop',
    description: 'Build your own website in React in our hands-on workshop.',
    date: new Date('March 31, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/web-dev.jpeg',
  },
  {
    title: 'Game Boy Emulation Workshop',
    description: 'Get a technical overview of emulation and learn how a Game Boy emulator is made.',
    date: new Date('April 7, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'TBD',
    cover: '/images/events/game-boy.jpg',
  },
  {
    title: 'BUGS: Project Part 1',
    description:
      'Join us for a workshop where we will learn how to use a REST API to return scraped data.',
    date: new Date('April 14, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/bugs.jpg',
  },
  {
    title: 'Club Project: Part 2',
    description:
      'Join us to learn how to create a React frontend to display our scraped course evaluation data.',
    date: new Date('April 28, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/bugs.jpg',
  },
  {
    title: 'End of semester party!',
    description: 'Join us for an end of semester get-together!',
    date: new Date('May 5, 2023'),
    startTime: '6 PM',
    endTime: '8 PM',
    location: 'WWH Room 101',
    cover: '/images/events/bugs.png',
  },
  {
    title: 'BUGS First Event',
    description: 'Join us for our first event of the semester!',
    date: new Date('September 29, 2023'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/first-event.jpg',
  },
  {
    title: 'BUGS presents: Git Onboard!',
    description: 'Learn about open source and the ins and outs of everything Git!',
    date: new Date('October 6, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/git-onboard.jpg',
  },
  {
    title: 'BUGS Project Fair',
    description: 'Come see what BUGS has been working on this semester!',
    date: new Date('October 13, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/project-fair.jpg',
  },
  {
    title: 'BUGS Presents... Playwright Workshop!',
    description: 'Learn about web scraping with Playwright.',
    date: new Date('October 20, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/playwright.jpg',
  },
  {
    title: 'Cracking the Coding Interview',
    description: 'Crash course for any Software Engineering Technical Interview!',
    date: new Date('October 27, 2023'),
    startTime: '3:30 PM',
    endTime: '4:30 PM',
    location: 'Leslie E-Lab',
    cover: '/images/events/ctci.jpg',
  },
  {
    title: 'BUGS Coding Session #2',
    description:
      'Join another coding session for BUGS open source projects. Free food, drinks, and friends!',
    date: new Date('October 27, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/coding-session-2.jpg',
  },
  {
    title: 'Web Development Workshop Part 1: HTML and CSS',
    description: 'Learn the basics of web development with HTML and CSS.',
    date: new Date('November 3, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/web-dev-1.jpg',
  },
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
];
