#include "main.h"

/**
  * *_strncpy - a function that copies 2 strings limited by n
  *@dest: dest string
  *@src: source string
  *@n: n is the limiter for the src string
  *Return: strncpy strings
  */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for ( ; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
