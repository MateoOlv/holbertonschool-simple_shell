#include "main.h"
void frees (int n, ...)
{
 va_list args;
 int i;
 char *c;

 va_start(args, n);
 for (i = 0; i < n; i++)
 {
    c = va_arg(args, char *);
    free(c);
 }
 va_end(args);
}