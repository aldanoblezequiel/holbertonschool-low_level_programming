#include "main.h"

/**
*_strstr - f
*@needle: finds
*@haystack: int
*Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	int i, h;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (h = 0; needle[h] != '\0'; h++)
		{
			if (haystack[i + h] != needle[h])
				break;
		}
		if (needle[h] == '\0')
			return (haystack + i);
	}
	return (0);
}
