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
char *_strcat(char *dest, char *src)
{
	int len = _strlen(dest);
	int i;

	for (i = 0; i < _strlen(src); i++)
	{
		dest[len + i] = src[i];
	}
	dest[len + i] = '\0';
	return (dest);
}
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	for (i = 0; s2[i]; i++)
		if (s2[i] != s1[i])
			return (s2[i] - s1[i]);
	return (0);
}

