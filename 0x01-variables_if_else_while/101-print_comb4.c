#include <stdio.h>

/**
*main - Digits
*Return: void
*/

int main(void)
{
	int a, b, i;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				if (a < b && b < i)
				{
					putchar(a);
					putchar(b);
					putchar(i);
					if (a < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
