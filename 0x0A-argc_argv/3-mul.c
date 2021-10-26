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
	int i;
	int j;
	int p;

	if (argc == 2)
	{
		i = argc;
		j = argc;
		p = i * j;
		printf("%s\n", argv[p]);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
