#include "main.h"
/*La variable num no se usa pero es necesaria para el SIGINT*/
void sigintHandler(int num)
{
	signal(SIGINT, sigintHandler);
	printf("\n$ ");
	fflush(stdout);
	(void)num
;
}