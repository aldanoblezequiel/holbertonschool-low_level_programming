#include "main.h"

/**
*leet - string to 1337
*@a: s
*Return: 1
*/

char *leet(char *a)
{
	char letras[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char numeros[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	int i = 0, n = 0;

	while (a[i])
	{
		n = 0;
		while (n < 10)
		{
			if (a[i] == letras[n])
				a[i] = numeros[n];
			n++;
		}
	i++;
	}
	return (a);
}
