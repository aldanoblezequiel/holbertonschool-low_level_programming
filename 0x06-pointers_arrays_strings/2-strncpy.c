#include "main.h"
/**
*_strncpy -First function (SIEMPRE LA DESCRIPCION DEL MAIN VA PRIMERO!!!!)
*Return: 0
*@dest: string var1
*@src: string var2
*@n: int var1
*/
char *_strncpy(char *dest, char *src, int n);
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		{
		dest[i] = src[i];
		for (i < n; i++)
		{
		src[i] = '\0';
		}
	}
	return (dest);
}
