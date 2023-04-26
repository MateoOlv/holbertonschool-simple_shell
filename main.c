#include "main.h"
int main(void)
{
    char delim[] = {" \n\t"};
    char *intput = NULL;
    char *token[80] = {0};
    char *string;
    size_t buffsize = 0;

    while (1)
    {
        printf("$ ");
        if (getline(&intput, &buffsize, stdin) == (-1))
        {
            if (intput)
                free(intput);
            exit(1);
        }
        token[0] = strtok(intput, delim);
        if (!token[0])
            continue;
        if (strcmp(token[0], "exit") == 0)
        {
            free(intput);
            exit(0);
        }
        tokenize(token, delim);
        string = commandfind(token[0]);
        execom(string, token);
    }
}
