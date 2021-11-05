#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
*print_numbers - print numbers
*@n: top arguments
*@...: var argument
*@separator: separates chars
*Return: all arguments
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int a;

	va_start(ptr, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(ptr, int));
		if (separator && a < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(ptr);
}
