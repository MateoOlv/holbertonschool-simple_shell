#include "main.h"
char *_getenv(char *len)
{
    char *env = NULL;
    char *val = NULL;
    int leng = _strlen(len);

    for (int i = 0; environ[i]; i++)
    {
        env = environ[i];
        if (strncmp(env, len, leng) == 0 && env[leng] == '=')
        {
            val = env + leng + 1;
            return strdup(val);
        }
    }
    return (NULL);
}