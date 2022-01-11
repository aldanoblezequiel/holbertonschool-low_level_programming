#include "main.h"
/**
*_strncat -Concatenates two strings n bytes from src
*Return: 0
*@n: int variable
*@src: string variable
*@dest: string variable 2
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
