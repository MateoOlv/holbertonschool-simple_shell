<div align="center">

<img src="https://apply.holbertonschool.com/holberton-logo.png" />
<h1> Simple Shell </h1>
<details>
<summary>FlowChart</summary>
<img src="https://i.ibb.co/ZSt0ZZQ/flowchart.png" />
</details>
</div>

<br>
  
## Index
* [Description](#description)
* [Requirements](#requirements)
* [How it work](#how-it-work)
* [Resources](#resources)
* [Credits](#credits)

## Description

### What it is?
Shell is a UNIX term for the interactive user interface with an operating system. The shell is the layer of programming that understands and executes the commands a user enters. In some systems, the shell is called a command interpreter.

## Requirements
<details>
  <summary>General</summary>
  
* Allowed editors: vi, vim, emacs.
* All your files will be compiled on Ubuntu 20.04 LTS.
* All your files should end with a new line.
* A README.md file, at the root of the folder of the project is mandatory.
* Your code should use the Betty style.
* Your shell should not have any memory leaks.
* No more than 5 functions per file.
* All your header files should be include guarded.
* Use system calls only when you need to.
</details>

<details>
  <summary>Compilation</summary>
  
  * Your code will be compiled this way:
```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o hsh
```
</details>

<details>
  <summary>GitHub</summary>
  
  * There should be one project repository per group. If you clone/fork/whatever a project repository with the same name before the second deadline, you risk a 0% score.
</details>

<details>
  <summary>Output</summary>
  
  * Unless specified otherwise, your program must have the exact same output as sh (/bin/sh) as well as the exact same error output.
  * The only difference is when you print an error, the name of the program must be equivalent to your argv[0] (See below)
  
  #### Example of error with sh:
  ```
  $ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
  ```
</details>

<details>
  <summary>Allowed functions and system calls</summary>
  
  * all functions from strings.h
* access (man 2 access)
* chdir (man 2 chdir)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* fflush (man 3 fflush)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* getpid (man 2 getpid)
* isatty (man 3 isatty)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* printf (man 3 printf)
* fprintf (man 3 fprintf)
* vfprintf (man 3 vfprintf)
* sprintf (man 3 sprintf)
* putchar (man 3 putchar)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)
</details>

## How it work
<details>
  <summary>Video</summary>
  



https://user-images.githubusercontent.com/124683293/235304972-a02c71cc-aa64-48c5-a967-d1fef4ab5f20.mp4



</details>




## Resources

<details>
  <summary>Links</summary>
  
  * <a href="https://en.wikipedia.org/wiki/Unix_shell">[Unix Shell]</a>
  * <a href="https://en.wikipedia.org/wiki/Thompson_shell">[Thompson shell]</a>
  * <a href="https://en.wikipedia.org/wiki/Ken_Thompson">[Ken Thompson]</a>
  * <a href="https://intranet.hbtn.io/concepts/900">[Super Simple Shell]</a>
  * <a href="https://intranet.hbtn.io/concepts/895">[Flowcharts]</a>
  
</details>
  
<div align="center">
  
## Credits
 
&ensp;[<img src="https://img.shields.io/badge/MateoOlv-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/MateoOlv)
&ensp;[<img src="https://img.shields.io/badge/coxan33-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/coxan33)

</div>
