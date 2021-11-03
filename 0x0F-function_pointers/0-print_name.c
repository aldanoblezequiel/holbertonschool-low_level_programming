#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
*print_name - Function that prints a name
*@name: Name to print
*@f: pointer
*/


void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
