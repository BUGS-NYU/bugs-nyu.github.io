import classNames from "classnames";
import { Link } from "gatsby";
import React from "react";
import Button from "./Button";

type NavBarElement = React.ElementRef<"header">;
type NavBarProps = React.ComponentPropsWithoutRef<"header"> & {};

const NavBar = React.forwardRef<NavBarElement, NavBarProps>(
  ({ className, ...restProps }) => {
    return (
      <header className={className} {...restProps}>
        <div className="mx-auto max-w-5xl h-24 px-8 flex flex-row items-center justify-between">
          <Link to="/">BUGS</Link>
          <div className="flex flex-row space-x-8">
            <Link to="/about">About Us</Link>
            <Link to="/projects">Projects</Link>
            <Link to="/events">Events</Link>
          </div>
          <Button variant="primary" className="px-6">
            Join
          </Button>
        </div>
      </header>
    );
  }
);

export default NavBar;
