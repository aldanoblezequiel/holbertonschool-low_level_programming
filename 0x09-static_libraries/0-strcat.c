#include "main.h"
/**
*_strcat -First function (SIEMPRE LA DESCRIPCION DEL MAIN VA PRIMERO!!!!)
*Return: dest
*@dest: init variable 1
*@src: init variable 2
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (i = 0 ; dest[i] != '\0' ; i++)
	{
	}
	for (j = 0; src[j] != '\0' ; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
