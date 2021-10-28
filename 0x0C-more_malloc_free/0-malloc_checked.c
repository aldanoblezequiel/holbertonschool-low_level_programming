#include "main.h"
#include <stdlib.h>

/**
*malloc_checked -Allocates memory using malloc
*@b: unsigned int var
*Return: pointer
*/

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
