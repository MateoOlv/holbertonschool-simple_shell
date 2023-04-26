#include "main.h"
char *commandfind(char *line)
{
	char *token, *i;
	char *cp, *cp2, *duptoken;
	struct stat st;

	if (!_strcmp(line, "env"))
		return ("/usr/bin/env");
	i =  _getenv("PATH");
	if (!(i))
	{
	if ((stat(line, &st) == 0) && st.st_mode == 33261)
		return (line);
	else
		return (NULL);
	}
	else
	{
		cp = malloc(_strlen(i) + 1), cp2 = malloc(_strlen(line) + 1);
		duptoken = malloc(_strlen(i) + _strlen(line) + 1);
	}
	if ((stat(line, &st) == 0) && st.st_mode == 33261)
	{
		frees(4, cp, i, cp2, duptoken);
		return (line);
	}
	if (i)
		_strcpy(cp, i);
	_strcpy(cp2, line), token = strtok(cp, ":");
    /*Concatenamos cada token*/
	while (token)
	{
		_strcpy(duptoken, token);
		_strcat(duptoken, "/"), _strcat(duptoken, cp2);
		if ((stat(duptoken, &st) == 0) && st.st_mode == 33261)
		{
			frees(3, i, cp, cp2);
			return (duptoken);
		}
		token = strtok(NULL, ":");
	}
	frees(4, i, cp, cp2, duptoken);
	return (NULL);
}
int exepath(char **token)
{
    pid_t pid;
    int status;
    char *path = commandfind(token[0]);
    if (!path)
    {
        fprintf(stderr, "%s: not recognized as an internal or external command, program or executable batch file\n", token[0]);
        return (0);
    }
    pid = fork();
    if (pid == -1)
    {
        perror("Error: forking failed");
        return (1);
    }
    if (pid == 0)
    {
        if (execve(path, token, environ) == -1)
        {
            perror("Error: executing program failed");
            exit(EXIT_FAILURE);
        }
    }
    waitpid(pid, &status, 0);
    if (WIFEXITED(status))
    {
        return (WEXITSTATUS(status));
    }
    return (1);
}
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
				free(string);
		}
	}
    /*127 es el codigo de salida cuando el comando no se encontro*/
	else
	{
		fprintf(stderr, "%s: not recognized as an internal or external command, program or executable batch file\n", array[0]);
		val = 127;
	}
	return (val);
}
