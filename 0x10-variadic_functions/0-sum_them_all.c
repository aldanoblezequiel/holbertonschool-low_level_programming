#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
*sum_them_all - Add values
*@n: char to add
*Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{

	unsigned int a = 0;
	int sum = 0;
	va_list ptr;

	if (n == 0)
		return (0);
	va_start(ptr, n);
		for (a = 0; a < n; a++)
		{
		sum += va_arg(ptr, int);
		}
	va_end(ptr);
	return (sum);
}
