#include "main.h"
#include <stdlib.h>
/**
* array_range - Int array
*
*@min: value
*@max: value
*Return: Array or null
*/

int *array_range(int min, int max)
{
	int *a;
	int n;

	if (min > max)
		return (NULL);

	a = malloc((max - min) * sizeof(int) + sizeof(int));

	if (!a)
		return (NULL);

	for (n = 0; n <= max - min; n++)
		a[n] = n + min;

	return (a);
}
