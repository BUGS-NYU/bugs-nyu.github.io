import * as React from "react";
import type { HeadFC, PageProps } from "gatsby";
import Button from "../components/Button";
import NavBar from "../components/NavBar";
import BugsLogo from "../svgs/bugs.svg";
import Card from "../components/Card";
import { ReactEmbeddedGoogleCalendar } from 'react-embedded-google-calendar';

const EventsPage: React.FC<PageProps> = () => {
    return (
       <div className="min-h screen antialiased">
        <NavBar />
        <main className="mx-auto man-w-5xl px-8">
          <div>
            <h1 className="text-8xl">Events</h1>
          </div>
            <div className="flex space-x-32 items-center py-10">
                <ReactEmbeddedGoogleCalendar publicUrl ="https://calendar.google.com/calendar/embed?src=1rg1va8hijkm732ta4j44lbch4%40group.calendar.google.com&ctz=America%2FNew_York"/>
            </div>
        </main>
       </div> 
    )
}

export default EventsPage;
export const Head: HeadFC = () => <title>Events</title>