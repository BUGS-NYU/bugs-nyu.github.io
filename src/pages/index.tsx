import * as React from "react";
import type { HeadFC, PageProps } from "gatsby";

const IndexPage: React.FC<PageProps> = () => {
  return (
    <main>
      <h1 className="text-3xl font-bold underline">Hello world!</h1>
    </main>
  );
};

export default IndexPage;

export const Head: HeadFC = () => <title>Home Page</title>;
