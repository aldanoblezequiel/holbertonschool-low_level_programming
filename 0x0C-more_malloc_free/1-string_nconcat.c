#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*string_nconcat - concatenates two strings.
*@s1: string1
*@s2: string2
*@n: unsigned int variable
*Return: String final
*/
char *string_nconcat(char *s1, char *s2, unsigned int n);
{
	int len1 = 0, len2 = 0;
	int j;
	char *c;

	if (s1 != NULL)
	{
	for (n = 0; s1[n] != 0; i++)
			len1++;
	}
	if (s2 != NULL)
	{
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
