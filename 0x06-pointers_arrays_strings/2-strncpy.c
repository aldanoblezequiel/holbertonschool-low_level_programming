#include "main.h"

/**
*_strncpy - copies a string.
*@dest: string
*@src: string2
*@n: bytes
*Return: d
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
