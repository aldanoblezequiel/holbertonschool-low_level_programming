#include <stdio.h>
#include "main.h"
/**
*main -Function that returns its own name
*@argc: int variable
*@argv: char variable
*Return: 0
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv;
	return (0);
}
