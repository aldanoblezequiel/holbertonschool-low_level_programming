#include "main.h"
/**
*_memcpy -First function (SIEMPRE LA DESCRIPCION DEL MAIN VA PRIMERO!!!!)
*Return: 0
*@dest: array variable
*@src: arrray variable
*@n: int variable
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
