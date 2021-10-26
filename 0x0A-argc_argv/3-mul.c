#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*main -Function that returns its own name
*@argc: int variable
*@argv: char variable
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int p;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		p = i * j;
		printf("%d\n", p);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
