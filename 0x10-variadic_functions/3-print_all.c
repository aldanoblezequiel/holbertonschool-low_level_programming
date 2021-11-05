#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
*print_all - prints the whole universe
*@...: var argument
*@format: list of arguments
*Return: void
*/

void print_all(const char * const format, ...)
{
	va_list ptr;

	va_start(ptr, format);
}
