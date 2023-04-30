#include "main.h"
/**
*main - Main fucntion that replicates a shell
*Return: 0
*/
int main(void)
{
	char delim[] = {" \n\t\r\a"}, *input = NULL, *tok;
	char **token = {NULL}, *string = NULL, *pun;
	size_t buffsize = 0;
	int tokcount = 0;

	while (1)
	{
atty:
		if (isatty(fileno(stdin)))
		{
			printf("$ ");
			fflush(stdout);
		}
		if (getline(&input, &buffsize, stdin) == -1)
		{
			if (input)
				free(input);
			exit(0);
		}
		tokcount = 0, token = malloc(sizeof(char*) * buffsize);
		tok = strtok(input, delim);
		while(tok != NULL)
		{ token[tokcount++] = tok; tok = strtok(NULL, delim); }
		if (tokcount == 0)
		{free(input); goto atty; }
		if (strcmp(token[0], "exit") == 0)
		{frees(2, input, token); exit(0); }
		string = commandfind(token[0]);
		if (string = NULL)
		{free(input); printf("Command not found: %p\n", token);
		continue;
		}
		execom(string, token);
		free(token);
	}
	free(input);
	return (0);
}
