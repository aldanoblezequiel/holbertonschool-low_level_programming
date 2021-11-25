#include "main.h"

/**
**_strcat - Conc
*@dest: str
*@src: s
*Return: d
*/

char *_strcat(char *dest, char *src)
{
	int n, s = 0;

	while (dest[s])
		s++;
	for (n = 0; src[n] != '\0'; n++)
	{
		dest[s] = (src[n]);
		s++;
	}
	return (dest);
}
