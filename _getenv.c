#include "main.h"
/**
*_getenv - get env clone function
*@name: name is the name
*Return: something
*
*/
char *_getenv(char *name)
{
	int i = 0;
	char *val = NULL;

	while (environ[i] != NULL)
	{
		if (strncmp(name, environ[i], _strlen(name)) == 0)
		{
			val = environ[i] + _strlen(name) + 1;
			return (strdup(val));
		}
		i++;
	}
	return (NULL);
}
