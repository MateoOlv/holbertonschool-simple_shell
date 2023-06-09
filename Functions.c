#include "main.h"
/**
*commandfind - function that find the command
*@line: command to be found
*Return: token or Null
*/
char *commandfind(char *line)
{
	char *token, *i, *cp, *cp2, *tokencopy;

	if (!_strcmp(line, "env"))
		return ("/usr/bin/env");
	i = _getenv("PATH");
	if (!(i))
	{
		if (access(line, X_OK) == 0)
			return (line);
		else
			return (NULL); }
	else
	{
		cp = malloc(_strlen(i) + 1);
		cp2 = malloc(_strlen(line) + 1);
		tokencopy = malloc(_strlen(i) + _strlen(line) + 2); }
	if (access(line, X_OK) == 0)
	{
		frees(4, cp, i, cp2, tokencopy);
		return (line); }
	if (i)
	_strcpy(cp, i);
	_strcpy(cp2, line);
	token = strtok(cp, ":");
	while (token)
	{
		_strcpy(tokencopy, token);
		_strcat(tokencopy, "/");
		_strcat(tokencopy, cp2);
		if (access(line, X_OK) == 0)
		{
			frees(3, i, cp, cp2);
			return (tokencopy); }
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

	if (!path)
	{
		fprintf(stderr, "%s: not recognized as acommand\n", token[0]);
		exit (errno);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("Error: forking failed");
		exit(errno);
	}
	if (pid == 0)
	{
		if (execve(path, token, environ) == -1)
		{
			perror("Error: executing program failed");
			exit(errno);
		}
	}
	waitpid(pid, &status, 0);
	if (WIFEXITED(status))
	{
		return (WEXITSTATUS(status));
	}
	return (1);
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
		fprintf(stderr, "%s: not recognized as a command\n", array[0]);
		exit(127);
	}
	return (val);
}
