#include "main.h"

/**
  * *_strncpy - a function that copies 2 strings limited by n
  *@dest: dest string
  *@src: source string
  *@n: n is the limiter for the src string
  *Return: strncpy strings
  */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		dest[i] = *(src + i);
	}
	dest[i] = '\0';

	return (dest);
}
