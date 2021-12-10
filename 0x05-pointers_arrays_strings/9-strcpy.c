#include "main.h"
/**
*_strcpy - Paste array
*@src: var char
*@dest: char pointer
*Return: dest
*/
#include "main.h"
#include <stdio.h>
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	for (n = 0; src[n]; n++)
	dest[n] = src[n];
	dest[n] = src[n];
	return (dest);
}
