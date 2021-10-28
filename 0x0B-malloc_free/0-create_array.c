#include "main.h"
#include <stdlib.h>
/**
*create_array - malloc array
*@size: array size
*@c: char variable
*Return: pointer or null
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size < 1)
		return (NULL);

	a = (char *)malloc((sizeof(char) * size));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
