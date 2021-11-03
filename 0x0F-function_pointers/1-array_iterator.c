#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
*array_iterator - Iterates an array
*@array: the array to iterate
*@size: size of the array
*@action: pointer to array_iterator
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action || array)
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}


