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

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
