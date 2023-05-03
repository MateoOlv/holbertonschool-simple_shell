#include "main.h"
/*La variable num no se usa pero es necesaria para el SIGINT*/
/**
*sigintHandler - signal handler
*@num: number
*/
void sigHandler(int num)
{
	(void)num;

	signal(SIGINT, sigHandler);
	printf("\n$ ");
	fflush(stdout);
}
