#include "main.h"
/**
*main - Main fucntion that replicates a shell
*Return: 0
*/
int main(void)
{
	char delim[] = {" \n\t\r\a"};
	char *input = NULL;
	char *token[80] = {0};
	char *string = NULL;
	size_t buffsize = 0;

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
			if (isatty(fileno(stdin)))
				printf("\n");
			if (input)
				free(input);
			exit(0);
		}
		token[0] = strtok(input, delim);
		if (token[0])
		{
		if (strcmp(token[0], "exit") == 0)
		{
			free(input);
			exit(0); } }
		else
			goto atty;
		tokenize(token, delim);
		string = commandfind(token[0]);
		execom(string, token);
	}
	free(input);
	return (0);
}
