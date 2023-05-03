#include "main.h"
/**
*commandfind - function that find the command
*@line: command to be found
*Return: token or Null
*/
char *commandfind(char *line)
{
	char *token, *i, *cp = NULL, *cp2, *tokencopy = NULL;

	if (!_strcmp(line, "env"))
		return ("/usr/bin/env");
	i = _getenv("PATH");
	if (!i)
	{
		if (access(line, X_OK) == 0)
			return (line);
		else
			return (NULL); }
	else if (*i == '\0')
	{
	if (access(line, X_OK) == 0)
	{return (line); }
	else
	{return (NULL); }
	}
	else
	{
		cp = malloc(_strlen(i) + 1);
		cp2 = malloc(_strlen(line) + 1);
		tokencopy = malloc(_strlen(i) + _strlen(line) + 1); }
	if (access(line, X_OK) == 0)
	{
		frees(4, cp, i, cp2, tokencopy);
		return (line); }
	if (i)
	{_strcpy(cp, i); }
	_strcpy(cp2, line), token = strtok(cp, ":");
	while (token)
	{
		_strcpy(tokencopy, token), _strcat(tokencopy, "/");
		_strcat(tokencopy, cp2);
		if (access(tokencopy, X_OK) == 0)
		{
			frees(3, i, cp, cp2); return (tokencopy); }
		token = strtok(NULL, ":"); }
	frees(4, i, cp, cp2, tokencopy);
	return (NULL);
}
/**
* exepath - find a path
* @token: token
* Return: 1
*/
int exepath(char **token)
{
	pid_t pid;
	int status;
	char *path = commandfind(token[0]);
	int erno;

	if (!path)
	{
		fprintf(stderr, "%s: not recognized as a command\n", token[0]);
		exit(1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("Error: forking failed");
		exit(1);
	}
	else if (pid > 0)
	{
		wait(&status);
		erno = WEXITSTATUS(status);
	}
	else
	{
		if (execve(path, token, environ) == -1)
		{
			perror("Error: executing program failed");
			exit(EXIT_FAILURE);
		}
	}
	return (erno);
}
/**
*execom - execute a command
*@string: string
*@array: array
*Return: Value
*/
int execom(char *string, char **array)
{
	int val;

	if (string)
	{
		if (!(_strcmp(array[0], string)))
			val = exepath(array);
		else
		{
			array[0] = string;
			val = exepath(array);
			if (_strcmp(string, "/usr/bin/env"))
			{
				free(string);
			}
		}
	}
	else
	{
		fprintf(stderr, "./hsh: 1: %s: not found\n", array[0]);
		free(string);
		val = 127;
	}
	return (val);
}
