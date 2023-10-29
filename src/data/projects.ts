export interface Project {
  name: string;
  summary: string;
  description: string;
  url: string;
}

export const PROJECTS: Project[] = [
  {
    name: 'NYU Syllabi',
    summary: 'Repository of Syllabi for NYU schools',
    description:
      'NYU Syllabi is a place to find and upload syllabi for different NYU classes across all schools.',
    url: 'https://github.com/BUGS-NYU/nyu-syllabi/',
  },
  {
    name: 'NYU CS Wiki',
    summary: 'Guide for all NYU CS Students',
    description:
      'The NYU CS Wiki provides guidance and resources for NYU CS students at Tandon and CAS. It is a collaborative effort by students, for students, that gives detailed information on different topics including competitive programming, internships, clubs and more.',
    url: 'https://github.com/BUGS-NYU/nyu-cs-wiki/',
  },
  {
    name: 'BUGS Website',
    summary: 'Website For The Club',
    description:
      'The website is built from scratch, using React, to be a one-stop-shop for information about the open source club. It provides information about what the club is for, the projects we work on, and upcoming events. We hope to constantly update the website with features.',
    url: 'https://github.com/BUGS-NYU/bugs-website',
  },
  {
    name: 'Schedge API',
    summary: 'Course API for NYU',
    description:
      "Schedge is an open source API to NYU's course catalog, geared at eventually helping NYU students plan their courses easier and faster. Our goal with this API is to make it easier for students to plan out their schedules, and eventually to also do some of that for them",
    url: 'https://github.com/BUGS-NYU/schedge',
  },
];
