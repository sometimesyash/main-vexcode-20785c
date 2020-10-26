# The README for The Official 20785C Account

A quick guide on installation, how to use and rules for the Github repo of 20785C

## Installation guide

**Step 1: Installing VexCode**

VexCode, or V5 Text, is there in order to help program the vex files. Note VEX exclusively uses VexCode or pros.
To install, simply head over to [this link](https://www.vexrobotics.com/vexcode-download)

**Step 2 (recommended but optional): Installing Git in the command line**

To push code (see below), or to make pull requests etc., Git needs to be installed. This can easily be done at [this link](https://git-scm.com/book/en/v2/Getting-Started-Installing-Git), or by typing `sudo apt install git-all` for Linux users,

Also install the Github CLI from [this link](https://cli.github.com/).


**Step 3 (optional): Install a Text Editor**

Usually, some developers use a text editor to edit code. Whereas VexCode is one of these, it only works for VEX files. I recommended downloading [Atom](https://atom.io/) from the link to help download.

##How To Use

This is really important, and I would really recommended reading through this thoroughly.

#### Downloading the code

The first step is to download the code from the system. This shouldn't take that long. There are two ways of doing this:

- Use the button on top of the repo that says download. This downloads the code as a ZIP file. This is the easier way, but not the better way.
- Use the command line. Type into your command line `git clone <the link>` to clone the code directly into the system.

Please only download the folder that is necessary (for example only Auton, or Competiton, or Test1 etc.)

#### Editing the code

Editing the code is simple with VexCode - open the code with V5 Text and you're all ready to go.

#### Pushing the Code by creating a pull request: PLEASE READ

Pushing the code is fairly simple, but everyone **needs** to be doing this for every change made. There are also two ways of doing this:

+ Use the website to create a new branch, commit your code (by uploading the code), and send a pull request using the button.
+ Use the CLI - type `git commit -m "Reason for pushing"` (make sure the target is your branch) and it sends the code to your local repo, and send that to the entire workspace by `git push`

The Admin (Yash) will have control of accepting / rejecting pull requests.

## Rules

- Admin has final say on changes
- Annotate all pull requests or **they will be rejected**
- Create an issue for any queries.
