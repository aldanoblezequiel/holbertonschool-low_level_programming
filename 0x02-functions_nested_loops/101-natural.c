#include <stdio.h>

/**
 * main - print natural number
 * Return: 0
 */
int main(void)
{
	int i, b;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			b += i;
	}
	printf("%d\n", b);
	return (0);
}
