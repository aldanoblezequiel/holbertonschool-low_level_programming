#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*_strdup - *ptr to malloc memory
*@str: string to copy
*Return: pointer to null or to string
*/
char *_strdup(char *str)
{
	unsigned int i;
	unsigned int n;
	char *c;

	if (!str)
		return (NULL);

	for (n = 0; str[n] != 0;)
		n++;

	c = (char *)malloc((sizeof(char) * n + 1));

	if (c == NULL)
		return (NULL);

	for (i = 0; i <= n; i++)
	{
		c[i] = str[i];
	}

	return (c);
}
