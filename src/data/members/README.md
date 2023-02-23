# Member page

## Adding your name to the BUGS website

1. Fork [this repository](https://github.com/BUGS-NYU/bugs-nyu.github.io/fork).
1. Clone your forked repository to your local machine: `git clone https://github.com/USERNAME/bugs-website.git`.
1. Create a new branch for your changes: `git checkout -b add-name`.
1. Create a new file in the [`/src/data/members`](/src/data/members) directory with your netid. For example, if your netid is abc123, then the file should be `abc123.md`.
1. In the file, add your name and save the file. An example file is located at [`/src/data/members/netid1234.md`](/src/data/members/netid1234.md).
1. Stage your changes: `git add .`.
1. Commit your changes: `git commit -m "Add name"`.
1. Push your changes to your forked repository: `git push -u origin add-name`. If you get access errors, make sure you forked and cloned your personal repository from steps 1 and 2 and not the BUGS-NYU repository!
1. Create a pull request on the [BUGS repository](https://github.com/BUGS-NYU/bugs-nyu.github.io/pulls).
1. That's it! One of the executive board members will review and merge your pull request. Once done, your name should now appear on the website.
