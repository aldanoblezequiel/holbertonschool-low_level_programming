#include "main.h"
#include <stdio.h>

/**
 * print_buffer - make the buff
 * @b: the buff itself
 * @size: weight of the buff
 * Return: 0
 */
void print_buffer(char *b, int size)
{
	int o = 0, i, n;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		n = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (i = 0; i < 10; i++)
		{
			if (i < n)
				printf("%02x", *(b + o + i));
			else
				printf("  ");
			if (i % 2)
				printf(" ");
		}
		for (i = 0; i < n; i++)
		{
			int c = *(b + o + i);

			if (c < 32 || c > 132)
				c = '.';
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}
