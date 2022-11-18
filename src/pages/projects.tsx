import * as React from "react";
import type { HeadFC, PageProps } from "gatsby";
import Button from "../components/Button";
import NavBar from "../components/NavBar";
import BugsLogo from "../svgs/bugs.svg";
import Card from "../components/Card";

const IndexPage: React.FC<PageProps> = () => {
  return (
    <div className="min-h-screen antialiased">
      <NavBar />
      <main className="mx-auto max-w-5xl px-8">
        <div className="flex space-x-32 items-center">
            
          <div className="mt-24">
            <h1 className="text-8xl font-bold">Projects</h1>
          </div>
        </div>
        <br></br> 
        <Card shadow="normal">
            <h3 className="font-bold"><a href="https://github.com/BUGS-NYU/schedge">Schedge API</a></h3>
            <p className="mt-2">
                Schedge is an open source API to NYU's course catalog, geared at eventually helping NYU students plan their courses easier and faster.
                Our goal with this API is to make it easier for students to plan out their schedules, and eventually to also do some of that for them
            </p>
        </Card>
        <div className="mt-8 flex flex-col space-y-4 md:flex-row md:space-y-0 md:space-x-4"> 
            <Card shadow="normal">
                <h3 className="font-bold">Schedge API</h3>
                <p className="mt-2">
                    Schedge is an open source API to NYU's course catalog, geared at eventually helping NYU students plan their courses easier and faster.
                    Our goal with this API is to make it easier for students to plan out their schedules, and eventually to also do some of that for them
                </p>
            </Card>
        </div>
      </main>
    </div>
  );
};

export default IndexPage;

export const Head: HeadFC = () => <title>Home Page</title>;
