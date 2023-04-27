#include "main.h"
char *_getenv(char *name)
{
	int i = 0;
	char *val = NULL;

	unsigned long lenValue, lenName = strlen(name);

	while (environ[i] != NULL)
	{
		lenValue = (strlen(environ[i]) - lenName + 1);
		val = malloc(lenValue * sizeof(char));
		if (val == NULL)
		{
			perror("failed to allocate value");
			return (NULL);
		}
		if (strncmp(name, environ[i], lenName) == 0 && strcpy(val, environ[i]))
			return (val);
		free(val);
		val = NULL;
		i++;
	}
	return (NULL);
}
