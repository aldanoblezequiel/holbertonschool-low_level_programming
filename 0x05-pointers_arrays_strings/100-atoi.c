 #include "main.h"
/**
 * _atoi - pass str to int
 * @s: input string
 * Return: aux
 */

int _atoi(char *s)
{
	int pos, num, negative;
	unsigned int aux;

	num = 0;
	aux = 0;
	negative = 1;
	for (pos = 0; s[pos] != 0; pos++)
	{
		if (s[pos] == '-')
		{
			negative = negative * -1;
		}
		if (s[pos] >= 48 && s[pos] <= 57)
		{
			aux = (aux * 10) + (s[pos] - 48);
			if ((*(s + pos + 1) < 48) || (*(s + pos + 1) > 57))
				break;
		}
	}
	num = aux;
	if (negative == (-1))
		num = -num;
	return (num);
}
