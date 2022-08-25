#include "search_algos.h"

/**
 *rec_advanced_binary_search - search recursivbieja
 *@array: pointer of
 *@size: size of
 *@value: value of
 *Return: index bieja
 **/
int *rec_advanced_binary_search(int *array, size_t size, int value)
{

	size_t a = 0;

	if (!array)
		return (NULL);

	if (!size)
		return (NULL);

	for (printf("Searching in array: "); a < size; a++)
		printf("%d%s", array[a], a + 1 == size ? "\n" : ", ");

	a = (size - 1) / 2;
	if (array[a] == value)
	{
		if (a)
			return (rec_advanced_binary_search(array, a + 1, value));
		return (array + a);
	}
	if (array[a] > value)
		return (rec_advanced_binary_search(array, a + 1, value));
	else
		return (rec_advanced_binary_search(array + a + 1, size - a - 1, value));
}

/**
 *advanced_binary - recursion bieja
 *@array: ptr to array
 *@size: size of
 *@value: value of
 *Return: index of
 **/
int advanced_binary(int *array, size_t size, int value)
{
	int *index;

	index = rec_advanced_binary_search(array, size, value);

	if (!index)
		return (-1);

	else
		return (index - array);
}

