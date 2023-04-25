#include "main.h"

int exepath(char **tok)
{
	pid_t pid;
	int status;
	char *path = programStat(tok[0]);
	if (!path)
	{
		fprintf(stderr, "./hsh: %s: not found\n", token[0])
			return (1);
	}
	pid = fork();
	if (pid == -1)
	{
		perror("Error: forking child process failed");
		exit(1);
	}
	if (pid == 0)
	{
		if (execve(path, tok, environ) == -1)
		{
			perror("Error: executing program failed");
			exit(EXIT_FAILURE);
		}
	}
	waitpid(pid, &status, 0);
	if (WIFEXITED(status));
	{
		return (WEXITSTATUS(status));
	}
	return (1);
}
