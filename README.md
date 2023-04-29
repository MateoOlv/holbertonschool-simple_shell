<div align="center">
<a href="https://holbertonschool.uy"><img src="https://apply.holbertonschool.com/holberton-logo.png" /></a>
<h1><strong>C - Simple Shell</strong> <a href="https://holbertonschool.uy"></h1>
<h2><div id="Flowchart"></h2>
<h2>
<details>
<summary>Flowchart</summary>
<img src="https://i.ibb.co/k1xfKSg/Driagrama-de-flujo.png=" />
</details>
</h2>
</div>
<br>                  
<br>
<h2>
Index
</h2>
<ul>
                <li><a href="#Description"> <strong> Description </strong> </a></li>
                <li><a href="#Requirement of the project"> <strong> Requirement of the project </strong> </a></li>
                <li><a href="#Compilation"> <strong> Compilation </strong> </a></li>
                <li><a href="#General"> <strong> General </strong> </a></li>
                <li><a href="#List of allowed functions and system calls+"> <strong> List of allowed functions and system calls+ </strong> </a></li>
                <li><a href="#Testing"> <strong> Testing </strong> </a></li>
                <li><a href="#Flowchart"> <strong> Flowchart </strong> </a></li>
                <li><a href="#Credits"> <strong> Credits </strong></a></li>
<hr>
<h2 id="Description">Description</h2>
<details>
<summary></summary>
<p>Simple shell: This is a version of shell for holbertonschool-simple_shell project. The program works like the sh shell with all the functionalities that it provides and a primitive interface.</p>
</details>
<h2 id="Requirement of the project">Requirement of the project</h2>
<h2 id="Compilation">Compilation</h2>
<details>
<summary></summary>
<p> -Wall -Werror -Wextra -pedantic -std=gnu89 </p>
</details>
<hr>
 <h2 id="General">General</h2>
<details>
 <summary></summary>
<ul>
                <li> Who designed and implemented the original Unix operating system </li>
                <li> Who wrote the first version of the UNIX shell </li>
@@ -36,162 +52,77 @@
                <li> What are the threle prototypes of main </li>
                <li> How does the shell use the PATH to find the programs </li>
                <li> How to execute another program with the execve system call </li>
                                <li> How to suspend the execution of a process until one of its children terminates </li>
  				          <li> What is EOF / “end-of-file”? </li>
  				          <li> Allowed editors: vi, vim, emacs </li>
                <li> All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89 </li>
  				          <li> All your files should end with a new line </li>
  				          <li> A README.md file, at the root of the folder of the project is mandatory </li>
  				          <li> Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl </li>
  				          <li> Your shell should not have any memory leaks </li>
  				         <li> No more than 5 functions per file </li>
  				         <li> All your header files should be include guarded </li>
  				         <li> Use system calls only when you need to (why?) </li>
 </ul>
 </details>
<hr>
<h2 id="List of allowed functions and system calls+">List of allowed functions and system calls+</h2>
<details>
<summary></summary>
<ul>
                <li>all functions from strings.h</li>
                <li>access (man 2 access)</li>
                <li>chdir (man 2 chdir) </li>
                <li> close (man 2 close)</li>
                <li>closedir (man 3 closedir)</li>
                <li>execve (man 2 execve)</li>  
                <li>exit (man 3 exit)</li>
                <li>_exit (man 2 _exit)</li>  
   				         <li>	fflush (man 3 fflush)</li>
                <li>fork (man 2 fork)</li>
                <li>free (man 3 free)</li>
                <li>getcwd (man 3 getcwd)</li>
                <li>getline (man 3 getline)</li>
                <li>getpid (man 2 getpid)</li>
                <li>isatty (man 3 isatty)</li>
                <li>kill (man 2 kill)</li>
                <li>malloc (man 3 malloc)</li>
                <li>open (man 2 open)</li>
                <li>opendir (man 3 opendir)</li>
                <li>perror (man 3 perror)</li>
                <li>printf (man 3 printf)</li>
                <li>fprintf (man 3 fprintf)</li>
                <li>vfprintf (man 3 vfprintf)</li>
                <li>sprintf (man 3 sprintf)</li>
                <li>putchar (man 3 putchar)</li>
                <li>read (man 2 read)</li>
                <li>readdir (man 3 readdir)</li>
                <li>signal (man 2 signal)</li>
                <li>stat (__xstat) (man 2 stat)</li>
                <li>lstat (__lxstat) (man 2 lstat)</li>
                <li>fstat (__fxstat) (man 2 fstat)</li>
                <li>strtok (man 3 strtok)</li>
                <li>wait (man 2 wait)</li>
                <li>waitpid (man 2 waitpid)</li>
                <li>wait3 (man 2 wait3)</li>
                <li>wait4 (man 2 wait4)</li>
                <li>write (man 2 write)</li>

</ul>
</details>
<hr>
<h2 id="Testing">Testing</h2>
<details>
 <summary></summary>
  			<img src="https://i.ibb.co/HCdYHf6/Test-1-simple-Shell.png"400" height="400">
     <img src="https://i.ibb.co/2SCYWSs/Test-2-simple-shell.png" height="400">
</details>
<hr>
<div align="center">

## Credits

&ensp;[<img src="https://img.shields.io/badge/MateoOlv-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/MateoOlv)
&ensp;[<img src="https://img.shields.io/badge/coxan33-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/coxan33)

</div>
