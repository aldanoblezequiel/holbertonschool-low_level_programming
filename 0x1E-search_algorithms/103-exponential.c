#include "search_algos.h"
/**
 * binary_search - searchs for an item
 *
 * @array: array of
 * @size: size of
 * @value: value of
 *
 * Return: index of
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
/**
 * exponential_search - searchs for a value
 *
 * @array: array of
 * @size: size of
 * @value: value of
 * Return: the index
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 1;
	int res;

	if (size < 1 || !array)
		return (-1);

	while (idx < size && array[idx] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx *= 2;
	}
	if (idx < size - 1)
	{
		printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, idx);
		res = binary_search(&array[idx / 2], idx - (idx / 2) + 1, value);
	}
	else
	{
		printf("Value found between indexes [%ld] and [%ld]\n", idx / 2, size - 1);
		res = binary_search(&array[idx / 2], size - (idx / 2), value);
	}

	if (res != -1)
		res += (idx / 2);
	return (res);
}
