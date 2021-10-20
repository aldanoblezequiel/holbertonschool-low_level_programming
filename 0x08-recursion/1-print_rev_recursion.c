#include "main.h"
/**
*_print_rev_recursion -Print string in reverse
*Return: 0
*@s: char variable
*/
void _print_rev_recursion(char *s)
{
	if (*s < 1)
	{
	return;
	}
	else
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
