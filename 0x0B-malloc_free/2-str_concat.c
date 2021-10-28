#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_concat - concatenates two strings.
*@s1: string1
*@s2: string2
*Return: String final
*/
char *str_concat(char *s1, char *s2)
{
	int n, len1 = 0, len2 = 0;
	char *c;

	if (s1 != NULL)
	{
		/*Iterates over the first string*/
		for (n = 0; s1[n] != 0; n++)
			len1++;
	}
	if (s2 != NULL)
	{
		/*Iterates over the second string*/
		for (n = 0; s2[n] != 0; n++)
			len2++;
	}
	c = (char *)malloc((sizeof(char) * ((len1) + (len2) + 1)));

	if (c == NULL)
		return (NULL);

	for (n = 0; n < len1; n++)
		c[n] = s1[n];

	for (n = 0; n < len2; n++)
		c[len1 + n] = s2[n];


	return (c);
}
