#include "main.h"
/**
*_strlen_recursion -Print string in reverse
*Return: 0
*@s: char variable
*/
int _strlen_recursion(char *s)
{
	int n;

	if (*s < 1)
	{
		return ('\0');
	}
	for (n = 0; s[n] != '\0'; n++)
	{
		n = _strlen_recursion(s + 1);
	}
	return (n);
}
