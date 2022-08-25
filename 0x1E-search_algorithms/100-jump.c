#include "search_algos.h"
#include <math.h>
/**
 * jump_search - searchs value
 *
 * @array: array off
 * @size: sizeof
 * @value: value off
 * Return: the index
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, idx = 0;

	if (size < 1 || !array)
		return (-1);
	step = (size_t)(sqrt((double)(size)));

	while (idx < size)
	{
		if (value <= array[idx])
		{
			printf("Value found between indexes [%ld] and [%ld]\n", idx - step, idx);
			break;
		}
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx += step;
	}
	if (idx >= size)
		printf("Value found between indexes [%ld] and [%ld]\n", idx - step, idx);
	idx -= step;
	for (; idx < size; idx++)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
	}
	return (-1);
}
