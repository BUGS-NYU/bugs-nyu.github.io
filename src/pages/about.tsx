import * as React from "react";
import type { HeadFC, PageProps } from "gatsby";
import NavBar from "../components/NavBar";

const AboutPage: React.FC<PageProps> = () => {
  return (
    <div className="min-h-screen antialiased">
      <NavBar />
      <main className="mx-auto max-w-5xl px-8">
        <h2 className="mt-2 text-4xl font-bold">About Us</h2>
        <p className="mt-2">
          BUGS is the premier open source club at NYU; we advocate for the
          ideals of open source via first-hand experience of students having an
          exciting and inclusive environment for them to develop their own
          projects, work together with other members on larger projects, and
          take their skills to contribute to pre-existing open source projects.
        </p>
      </main>
    </div>
  );
};

export default AboutPage;
export const Head: HeadFC = () => <title>Events</title>;
