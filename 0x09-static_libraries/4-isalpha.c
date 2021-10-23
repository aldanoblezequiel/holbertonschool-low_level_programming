#include "main.h"
/**
*_isalpha -return A-z a-Z
*@c: The character to print
*Return: 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	(c >= 'A' && c <= 'Z'))
	return (1);
	else
	return (0);
}
