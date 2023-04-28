#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <stdarg.h>

extern char **environ;

/*Principal functions*/
char *commandfind(char *line);
int exepath(char **token);
void tokenize(char **token, char *delim);
int execom(char *string, char **token);
void sigintHandler(int sig_num);
char *_getenv(char *str);
/*Aux functions*/
int _strlen(char *str);
int _strcmp(char *str1, char *str2);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
/*free function*/
void frees(int n, ...);

#endif
