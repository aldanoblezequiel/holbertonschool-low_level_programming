#include <stdio.h>

/**
*main - comnbinate numvers
*Return: void
*/

int main(void)
{
	int i, b, c, d;

	for (i = '0'; i <= '9'; i++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				for (d = '0'; d <= '9'; d++)
				{
					if (((c + d) > (i + b) && c >= i) || i < c)
					{
					putchar(i);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (i + b + c + d == 227 && i == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
