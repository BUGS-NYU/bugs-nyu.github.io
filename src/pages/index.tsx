import * as React from "react";
import type { HeadFC, PageProps } from "gatsby";
import Button from "../components/Button";
import NavBar from "../components/NavBar";
import BugsLogo from "../svgs/bugs.svg";

const IndexPage: React.FC<PageProps> = () => {
  return (
    <div className="min-h-screen antialiased">
      <NavBar />
      <main className="mx-auto max-w-5xl px-8">
        <div className="flex space-x-32 items-center">
          <div className="mt-24">
            <h1 className="text-8xl font-bold">BUGS @ NYU</h1>
            <p className="mt-6">
              NYU’s premier open source club connecting students to create an
              inclusive environment to work on projects together.
            </p>
            <div className="mt-6 flex space-x-4">
              <Button variant="primary">Join the Club</Button>
              <Button>Learn More</Button>
            </div>
          </div>
          <div className="hidden md:block">
            <BugsLogo />
          </div>
        </div>
      </main>
    </div>
  );
};

export default IndexPage;

export const Head: HeadFC = () => <title>Home Page</title>;
