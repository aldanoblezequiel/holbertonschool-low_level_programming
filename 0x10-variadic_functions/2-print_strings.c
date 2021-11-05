#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
*print_strings - print strings
*@n: numbers
*@separator: string to be print in between
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list param;
	unsigned int i;
	char *p;

	if (n > 0)
	{
		va_start(param, n);
		for (i = 0; i < n; i++)
		{
			p = va_arg(param, char *);
			if (p == NULL)
				printf("(nil)");
			else
				printf("%s", p);
			if (n - 1 != i && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(param);
	printf("\n");
}
