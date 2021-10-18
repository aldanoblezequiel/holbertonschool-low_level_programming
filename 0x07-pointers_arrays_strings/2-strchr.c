#include "main.h"
/**
*_strchr -First function (SIEMPRE LA DESCRIPCION DEL MAIN VA PRIMERO!!!!)
*Return: 0
*@s: string variable
*@c: char variable
*/
char *_strchr(char *s, char c)
{
	int a;
	char *p;

	for (a = 0; s[a] != c && s[a] != '\0'; a++)
	{
	}
	if (s[a] == c)
	{
		p = &s[a];
	}
	else
	{
		p = '\0';
	}

	return (p);
}
