#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
*int_index - Searches for an integer
*@array: array of integer
*@size: size of the array
*@cmp: pointer to int_index
*Return: 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array || cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			return (i);
		}
	}
	return (-1);
}
