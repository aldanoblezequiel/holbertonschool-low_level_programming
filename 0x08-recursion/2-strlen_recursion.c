#include "main.h"
/**
*_strlen_recursion -Print string in reverse
*Return: 0
*@s: char variable
*/
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s < 1)
	{
		return ('\0');
	}
	else
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
