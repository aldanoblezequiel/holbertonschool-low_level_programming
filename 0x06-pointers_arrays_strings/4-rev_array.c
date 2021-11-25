#include "main.h"

/**
*reverse_array -  reverse
*@a: p
*@n: number
*/

void reverse_array(int *a, int n)
{
	int i, c;

	for (i = 0; i < n; i++)
	{
		n--;
		c = a[i];
		a[i] = a[n];
		a[n] = c;
	}
}
