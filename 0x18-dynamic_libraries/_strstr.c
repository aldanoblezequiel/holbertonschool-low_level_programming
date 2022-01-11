#include "main.h"

/**
 **_strstr - prints the rest of a string after a match from another string
 * @haystack: our string we want to find the needle in
 * @needle: string which contains key word for haystack
 * Return: a pointer to the begginning of the located substring null if otherw
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != 0)
	{
		char *begin = haystack;
		char *pattern = needle;

		while (*haystack && *pattern && *haystack == *pattern)
		{
			haystack++;
			pattern++;
		}
		if (!*pattern)
		{
			return (begin);
		}
		haystack = begin + 1;
	}
	return (0);
}
