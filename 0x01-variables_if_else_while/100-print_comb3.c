#include <stdio.h>

/**
*main - print 2
*Return: void
*/

int main(void)
{
	int i, b;

	for (i = '0'; i <= '9'; i++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (i < b)
			{
				putchar(i);
				putchar(b);
			if (i <= '7')
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
