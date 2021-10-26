#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
*main -Function that returns addition of two ints
*@argc: int variable
*@argv: char variable
*Return: 0
*/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int add;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
			printf("Error\n");
			return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	}
	return (0);
}
