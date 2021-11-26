#include "main.h"

/**
*_strspn - gets the length of a substring
*@s: number of bytes is extracted
*@accept: bytes
*Return: counter
*/

unsigned int _strspn(char *s, char *accept)
{
	int c, d;
	int counter = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		for (d = 0; accept[d] != '\0'; d++)
		{
		if (s[c] == accept[d])
			counter++;
		}
		if (s[c] == ' ')
			break;
	}
	return (counter);
}
