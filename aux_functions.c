#include "main.h"
int _strlen(char *s)
{
    int i;

    for (i = 0; s[i]; i++)
        continue;
    return (i);
}
char *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	while ((*copy++ = *src++) != '\0')
		continue;
	return (dest);
}

