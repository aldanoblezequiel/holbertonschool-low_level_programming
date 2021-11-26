#include "main.h"
#include <stdio.h>

/**
*print_diagsums - prints total sum
*@a: pointer
*@size: size xd
*/

void print_diagsums(int *a, int size)
{
	int run, sum1 = 0, sum2 = 0;

	for (run = 0; run < size; run++)
	{
		sum1 = sum1 + a[(size + 1) * run];
		sum2 = sum2 + a[(size - 1) * (run + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
