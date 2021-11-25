#include "main.h"
int _strlen(char *s);

/**
*string_toupper -  changes letters to uppercase
*@str: s
*Return: str
*/

char *string_toupper(char *str)
{

	int i = 0;
	int e;

	while (str[i] != '\0')
	i++;

	for (e = 0; e < i; e++)
	{
		if (str[e] >= 97 && str[e] <= 122)
			str[e] = str[e] - 32;
	}
	return (str);
}
