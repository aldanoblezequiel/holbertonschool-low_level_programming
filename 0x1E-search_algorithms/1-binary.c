#include "search_algos.h"
/**
 * binary_search - searchs for an item
 *
 * @array: array of items
 * @size: size of
 * @value: value to search
 *
 * Return: index of the value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, low, high, mid;

	if (size < 1 || !value || !array)
		return (-1);
	low = 0;
	high = size - 1;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (idx = low; idx <= high; idx++)
		{
			if (idx != low)
				printf(", ");
			printf("%d", array[idx]);
		}
		printf("\n");
		mid = ((high + low) / 2);
		if (value == array[mid])
			return (mid);
		else if (value > array[mid])
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
	}

	return (-1);
}
