#include "main.h"
/**
*main - Main fucntion that replicates a shell
*Return: 0
*/
int main(void)
{
	char delim[] = {" \n\t\r\a"};
	char *intput = NULL;
	char *token[80] = {0};
	char *string = NULL;
	size_t buffsize = 0;

	while (1)
	{
atty:
		if (isatty(fileno(stdin)))
		{printf("$ ");
		fflush(stdout); }
		if (getline(&intput, &buffsize, stdin) == -1)
		{
			if (intput)
				free(intput);
			exit(0); }
		token[0] = strtok(intput, delim);
		if (!token[0])
			goto atty;
		if (strcmp(token[0], "exit") == 0)
		{free(intput);
		exit(0); }
		tokenize(token, delim);
		string = commandfind(token[0]);
		execom(string, token);
	}
	free(intput);
	return (0);
}
