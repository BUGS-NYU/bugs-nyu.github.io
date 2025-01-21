export interface Link {
  name: string;
  url: string;
}

export interface Event {
  title: string;
  description: string;
  shortDescription?: string;
  links?: Link[];
  date: Date;
  startTime: string;
  endTime: string;
  location: string;
  cover: string;
  imgsList?: string[];
  imgsText?: string[];
  eventIndex?: number;
}

export const EVENTS: Event[] = [
  {
    title: 'Bugs x HRT',
    description: 'learn about the role of open source in the financial sector from kamen yotov, a tandon professor.',
    date: new Date('September 24, 2024'),
    startTime: '5:00 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/fall-2024/bugs_HRT.png',
  },
  {
    title: 'Bugs End of Semester Party',
    description: 'join us at our end of semester party and relax with some boba before finals week',
    date: new Date('May 3, 2024'),
    startTime: '5:00 PM',
    endTime: '6:00 PM',
    location: 'WWH Room 101',
    cover: '/images/events/end_of_semester_bugs.png',
  },
  {
    title: 'Bugs x Google Life of a Feature',
    description: 'learn about the deisgn and development cycle for creating new features for large projects',
    date: new Date('April 26, 2024'),
    startTime: '3:30 PM',
    endTime: '5:00 PM',
    location: 'WWH Room 101',
    cover: '/images/events/bugs_google_life_of_a_feature.png',
  },
  {
    title: 'BUGS x Girls Who Code SQL Workshop',
    description: 'learn about the basics of SQL query and create an employee check-in system! free food, drinks, and database knowledge',
    shortDescription: "BUGS collaborated with Girls Who Code to host a workshop on SQL (Structure Query Language). Girls Who Code led the workshop as everyone created their own mini queries with CRUD operations. SQL is a language used for relational database management. It helps with data manipulation, data definition, and data control. Everyone enjoyed buns from Mei Lai Wah.",
    links: [
      {
        name: "Slides",
        url: "https://docs.google.com/presentation/d/1QWiyGfHQuIhohpCukL8Fi_YWNK4MhjS-5OCRb_1eQxo/edit?usp=sharing"
      }
    ],
    date: new Date('April 19, 2024'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/bugs_x_girls_who_code.png',
  },
  {
    title: 'BUGS x Google',
    description: 'learn about open source security and AI from a Google staff engineer!',
    shortDescription: "Johnathon Metzam, a security engineer at Google shared his insights on open-source security and applying AI to security. He also shared some of his contributions to FuzzBench, a service that evaluates fuzz testing tools on an application-wide scale.",
    links: [
      {
        name: "Github",
        url: "https://github.com/jonathanmetzman"
      }
    ],
    date: new Date('March 19, 2024'),
    startTime: '4 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/bugssxgoogle.jpg',
    imgsList: ['/images/events-pictures/google/1.jpg',
    '/images/events-pictures/google/2.jpg',
    '/images/events-pictures/google/3.jpg',
    '/images/events-pictures/google/4.jpg',
    '/images/events-pictures/google/5.jpg',
    '/images/events-pictures/google/6.jpg'
    ],
    imgsText: ["Johnathon Metzam standing to the slide of projector with words 'Grad School on a Curve'. ",
      "Johnathon Metzam reaching out to slide that says 'Format Aware (blackbox)'. ",
      "Candid photo of Johnathon Metzam with hands together. ",
      "Candid photo of crowd sitting, listening to Johnathon Metzam. ",
      "Candid photo of crowd with Johnathon Metzam. ",
      "Candid photo of crowd sitting, listening to Johnathon Metzam. ",
      ],
  },
  {
    title: 'BUGS Kickoff Event',
    description: 'Get to know your new eBoard through their favorite open source tools!',
    shortDescription: `This Spring, a new eboard was elected for bugs. Each new member presented their favorite open-source project. 
      Abigail Zhou is the new president of BUGS and studies computer science at CAS. Her favorite open-source project is docker, which helps containerize your applications. 
      Leading BUGS events, Alex Ying is BUGS's new head event coordinator. He studies computer science at Tandon. his favorite open-source project is Dolphin, which is a Wii + Gamecube emulator. it has high compatibility, original hardware supported, and 97.1% of games playable to completion. 
      Alex Jia embraces two roles as the developer and event coordinator for BUGS. He studies computer science and mathematics at CAS. His favorite open source project is ps.ja which is a javascript library for creating coding, with a focus on making coding accessible and inclusive for artists and designers. 
      Riley Dou, BUGS communication and photographer, studies computer science at Tandon. redis is her favorite open-source project, which is an in-memory key-value database, cache, and messenger. 
      Sewon Kim studies computer science at CAS and helped upgrade the BUGS website. He is the BUGS website designer. he enjoys the open-source project react, which is a front-end component-based javascript framework. it has a modern learning curve and was his first web framework. 
      Helping organize BUGS events, Phil Chen is the event coordinator for BUGS. He studies computer science at CAS. Fawkes is his favorite open-source project which is used as a privacy tool, for facial “cloaking”. It helps protect your image online and it is easy to use. 
      Elaine Zou is BUGS's treasurer, and she studies computer science at CAS. Her favorite open-source project is GIT, which has helped to maintain the BUGS website. GIT helps with tracking changes in code and collaboration in creating code. 
      Lawrence Gu helps keep the CS wiki updated as BUGS's CS wiki writer. He is a math and computer science major at CAS. COQ, which is a formal proof management system is his favorite open-source project. 
      Faith Winford is the new website maintainer for BUGS. She studies computer science and philosophy at CAS. TensorFlow, which is an open-source machine learning framework developed by Google Brain for building and training neural networks, is her favorite open-source project. 
      Isha Gopal is the graphic designer for BUGS. She is studying computer science at CAS. Unfortunately, she could not attend the kickoff event.
      Afterwards, everyone enjoyed buns from Mei Lai Wah and boba from Wanpo.`,
    date: new Date('February 9, 2024'),
    startTime: '5 PM',
    endTime: '6 PM',
    location: 'WWH Room 101',
    cover: '/images/events/bugs.jpg',
    imgsList :['/images/events-pictures/kickoff/1.jpg',
      '/images/events-pictures/kickoff/2.jpg',
      '/images/events-pictures/kickoff/3.jpg',
      '/images/events-pictures/kickoff/4.jpg',
      '/images/events-pictures/kickoff/5.jpg',
      '/images/events-pictures/kickoff/6.jpg',
      '/images/events-pictures/kickoff/7.jpg',
      '/images/events-pictures/kickoff/8.jpg',
      '/images/events-pictures/kickoff/9.jpg',
      '/images/events-pictures/kickoff/10.jpg',
      '/images/events-pictures/kickoff/11.jpg',
      ],
    imgsText :["Abigal Zhou standing in front of 'meet the eboard' slide",
    "Alex Ying standing in front of 'meet the eboard' slide",
    "Alex Ying standing infront of slide about open source project 'Dolphin'",
    "Lawrence Gu standing in front of slide about open source project 'COQ'",
    "Elaine Zou standing in front of slide about open source project 'GIT'",
    "Phil Chen holds a peace sign in front of slide about open source project 'Fawkes'",
    "Faith Winford standing in front of description slide about her name, major and position",
    "Candid photo of audience looking at 'meet the eboard' presentation",
    "Alex Ying helping serve food out to memebers of BUGS",
    "Mei Lai Wah buns",
    "Multicolor lids of boba cups from Wanpo",
      ], 
  },
  {
    title: 'BUGS x Anubis',
    description: 'Meet with the founder of Anubis, John Cuniff, to learn more about the role of Open Source and container-oriented technology!',
    links: [
      {
        name: "AnubisLMS",
        url: "https://github.com/AnubisLMS"
      }
    ],
    date: new Date('February 23, 2024'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/anubis.jpg',
    imgsList: ['/images/events-pictures/anubis/1.jpg',
    '/images/events-pictures/anubis/2.jpg',
    '/images/events-pictures/anubis/3.jpg',
    '/images/events-pictures/anubis/4.jpg',
    '/images/events-pictures/anubis/5.jpg',
    '/images/events-pictures/anubis/6.jpg',
    '/images/events-pictures/anubis/7.jpg'
    ],
    imgsText: ['John Cuniff presenting about Anubis',
    'John Cuniff giving a presentation up front',
    'The audience for the presentation',
    'The audience for the presentation',
    'The dumplings from Vanessa\'s Dumplings',
    'Group of people interacting after the presentation',
    'Aneesh.'
    ],
  },
  {
    title: 'Tech Fest',
    description:'A night for connecting, networking, and learning everything tech alongside several other amazing tech clubs (Tech @ NYU | Print3D @ NYU | Girls Who Code | Product Management Club | Women in Computing)',
    date: new Date('February 21, 2024'),
    startTime: '5:30 PM',
    endTime: '7 PM',
    location: 'Kimmel Center, Eisner & Lubin Auditorium',
    cover: '/images/events/techfest1.jpg',
    imgsList: ['/images/events-pictures/techfest/1.jpg',
      '/images/events-pictures/techfest/2.jpg',
      '/images/events-pictures/techfest/3.jpg',
    ],
    imgsText: ["BUGS Eboard members standing in front of the BUGS table. From left to right: Alex Ying, Abigal Zhou, Elaine Zou, Alex Jia, Sewon Kim.",
      "BUGS Eboard members standing in front of the BUGS table. From left to right: Alex Ying, Abigal Zhou, Elaine Zou, Alex Jia, Sewon Kim.",
      "Candid Photo of eboard members talking to people in front of BUGS table.",
    ],
  },
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
    location: '6 Metrotech 7th floor (JAB775)',
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
    cover: '/images/events/bugs.jpg',
  },
  {
    title: 'Intro to BUGS and Git',
    description: 'Get an overview of BUGS, our projects, and learn about Git!',
    date: new Date('October 6, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/meet-and-greet.gif',
  },
  {
    title: 'BUGS Project Fair',
    description:
      'Hear from the project managers and get an intro to the BUGS Website, NYU CS Wiki, NYU Syllabi, and Schedge/Violet projects.',
    date: new Date('October 13, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'Online',
    cover: '/images/events/project-fair.jpg',
  },
  {
    title: 'Playwright Workshop',
    description: 'Learn about Python, Playwright and how to scrape the web!',
    date: new Date('October 20, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/scraping.jpeg',
  },
  {
    title: 'Bugtastic Coding Session #1',
    description: 'Get some snacks and contribute to BUGS open source projects!',
    date: new Date('October 27, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/coding-session.jpg',
  },
  {
    title: 'OpenSearch Talk',
    description:
      'Come to our first speaker event, featuring Daniel Doubrovkine, Principal Engineer of OpenSearch!',
    date: new Date('November 3, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/opensearch.png',
  },
  {
    title: 'Bugtastic Coding Session #2',
    description: 'Get some snacks and contribute to BUGS open source projects!',
    date: new Date('November 10, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/coding-session.jpg',
  },
  {
    title: 'React Workshop Part 1',
    description: 'Learn to use React to make a personal portfolio website!',
    date: new Date('November 17, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/web-dev.jpeg',
  },
  {
    title: 'Bugtastic Coding Session #3',
    description:
      'Get some snacks and contribute to BUGS open source projects, with a focus on the NYU CS Wiki!',
    date: new Date('December 1, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/coding-session.jpg',
  },
  {
    title: 'React Workshop Part 2',
    description: 'Continue with React and the portfolio website',
    date: new Date('December 8, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/web-dev.jpeg',
  },
  {
    title: 'End of Semester Party',
    description: 'PARTY!!!!!!!!!!!!!!!!!!!!!!!!!',
    date: new Date('December 15, 2023'),
    startTime: '5 PM',
    endTime: '6:30 PM',
    location: 'WWH Room 101',
    cover: '/images/events/feature.png',
  },
];
