#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - if function
*betty style doc for function main goes there
*Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
	if (n == 0)
	printf("%d is zero", n);
	else if (n < 0)
	printf("%d is negative", n);
	else
	printf("%d is positive", n);
	return (0);
}