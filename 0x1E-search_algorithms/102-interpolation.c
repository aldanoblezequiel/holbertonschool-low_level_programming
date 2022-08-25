#include "search_algos.h"
/**
 * interpolation_search - searchs for vaue xd
 *
 * @array: array of
 * @size: size of
 * @value: value of
 * Return: the index
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, idx;

	if (size < 1 || !array)
		return (-1);

	low = 0, high = size - 1;

	while (low <= high)
	{
		idx = low + (((double)(high - low) / (array[high] -
			array[low])) * (value - array[low]));
		if (idx > size)
		{
			printf("Value checked array[%ld] is out of range\n", idx);
			return (-1);
		}
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
			return (idx);
		if (value < array[idx])
			high = idx - 1;
		else if (value > array[idx])
			low = idx + 1;
		else
			return (idx);
	}
	return (-1);
}
