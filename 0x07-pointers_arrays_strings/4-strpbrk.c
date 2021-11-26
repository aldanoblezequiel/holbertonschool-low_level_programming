#include "main.h"

/**
*_strpbrk - function that Searches a string for any of a set of bytes
*@s: String s
*@accept: Bytes in the string
*Return: 0
*/

char *_strpbrk(char *s, char *accept)
{
	int n, d;

	for (n = 0; s[n] != '\0'; n++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
		if (s[n] == accept[d])
		{
			return (&s[n]);
		}
		}
	}
	return (0);
}
