#include "main.h"

/**
*
*_atoi - Function atoi
*
*/

int _atoi(char *s)
{
	int run = 0;
	char num;

	while (s[run])
	{
		for (num = '0'; num <= '9'; num++)
		{
		if (s[run] == '-' && s[run + 1] == num)
			_putchar('-');
		}
		if (s[run] >= '0' && s[run] <= '9')
		{
			_putchar(s[run]);
		}
		run++;
	}
	return (0);
}
