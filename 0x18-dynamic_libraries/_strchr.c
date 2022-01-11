#include "main.h"

/**
*
*_strchr - string channel
*
*/

char *_strchr(char *s, char c)
{
	int d;
	char *p;

	for (d = 0; s[d] != c && s[d] != '\0'; d++)
	{
	}
	if (s[d] == c)
	{
		p = &s[d];
	}
	else
		p = '\0';
	return (p);
}
