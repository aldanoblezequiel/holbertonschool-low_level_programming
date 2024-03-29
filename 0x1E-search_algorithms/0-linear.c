#include "search_algos.h"
/**
 * linear_search - searchs for array
 *
 * @array: to search
 * @size: arraysize
 * @value: to search
 *
 * Return: Idx of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t idx;

	if (size < 1 || !value || !array)
		return (-1);
	for (idx = 0; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (array[idx] == value)
			return (idx);
	}
	return (-1);
}
