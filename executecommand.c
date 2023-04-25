int execommand(char *string, char **array, int *pcount)
{
    int returncommand;
    
    array[0] = string;
    returncommand = exepath(array);
    
    if (_strcmp(string, "/usr/bin/env"))
        free(string);

    (*pcount)++;
    
    if (returncommand == -1)
    {
        fprintf(stderr, "./hsh: %d: %s: not found\n", *pcount, array[0]);
        returncommand = 127;
    }
    
    return returncommand;
}