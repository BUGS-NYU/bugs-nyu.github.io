import * as React from "react";
import type { HeadFC, PageProps } from "gatsby";
import NavBar from "../components/NavBar";

const EventsPage: React.FC<PageProps> = () => {
    return (
       <div className="min-h screen antialiased">
        <NavBar />
        <main className="mx-auto man-w-5xl px-8">
            <div className="flex space-x-32 items-center">

            </div>
        </main>
       </div> 
    )
}

export default EventsPage;export const Head: HeadFC = () => <title>Events</title>