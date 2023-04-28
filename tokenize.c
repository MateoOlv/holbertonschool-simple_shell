#include "main.h"
/**
*tokenize - tokenizer
*@token: token
*@delim: delimitador
*/
void tokenize(char **token, char *delim)
{
	int i;

	i = 0;
	while (token[i])
	{
		i++;
		token[i] = strtok(NULL, delim);
	}
}
