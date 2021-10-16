#include "main.h"
/**
*rev_string -string rev
*@s: stirng
*Return: 0
*/
void rev_string(char *s)
{
	int a, b, c;

	for (a = 0; s[a] != '\0'; a++)
	{

	}

	a = a - 1;

	for (b = 0; b <= a; b++, a--)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;
	}
}
