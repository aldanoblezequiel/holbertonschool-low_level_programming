#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - function that gets right funct
 * @argc: int
 * @argv: pointer array of chars
 * Return: the function
 */

int main(int argc, char **argv)
{
	int a = 0, b = 0, c = 0;
	int (*fun)(int a, int b);

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	fun = get_op_func(argv[2]);

	if (!fun)
	{
		puts("Error");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if ((argv[2][0] == '/' && b == 0) || (argv[2][0] == '%' && b == 0))
	{
		puts("Error");
		exit(100);
	}

	fun = get_op_func(argv[2]);
	c = fun(a, b);

	printf("%d\n", c);

	return (0);
}
