#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rot13 - converts to rot13
 * @s: str
 *
 * Return: rot 13
 */
char *rot13(char *s)

{
	int n, j;
	char ini[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char fin[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (n = 0; s[n]; n++)
	{
		for (j = 0; j < 52; j++)
		{
			if (ini[j] == s[n])
			{
				s[n] = fin[j];
				break;
			}
		}
	}
	return (s);
}
