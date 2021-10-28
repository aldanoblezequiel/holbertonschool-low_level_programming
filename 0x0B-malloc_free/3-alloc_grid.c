#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
*alloc_grid - puntero a matriz
*@width: pos1
*@height: pos2
*Return: pointer to array or null
*/
int **alloc_grid(int width, int height)
{
	int **c;
	int i;

	if (width == 0 || height == 0)
		return (NULL);

	c = malloc((height) * sizeof(int *));

	if (c == NULL)
	{
		free(c);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		c[i] = malloc(width * sizeof(int));

		if (c[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(c[i]);
			}
			free(c);

		}
	}

	return (c);
}
