#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_add - function that returns sum
 * @a: int
 * @b: int
 * Return: sum
 */

int op_add(int a, int b)
{
	int c = 0;

	c = a + b;
	return (c);
}

/**
 * op_sub - function that returns difference
 * @a: int
 * @b: int
 * Return: difference
 */

int op_sub(int a, int b)
{
	int c = 0;

	c = a - b;
	return (c);
}

/**
 * op_mul - function that returns mult
 * @a: int
 * @b: int
 * Return: mult
 */

int op_mul(int a, int b)
{
	int c = 0;

	c = a * b;
	return (c);
}


/**
 * op_div - function that returns div
 * @a: int
 * @b: int
 * Return: div
 */

int op_div(int a, int b)
{
	int c = 0;

	c = a / b;
	return (c);
}


/**
 * op_mod - function that returns mod
 * @a: int
 * @b: int
 * Return: mod
 */

int op_mod(int a, int b)
{
	int c = 0;

	c = a % b;
	return (c);
}
