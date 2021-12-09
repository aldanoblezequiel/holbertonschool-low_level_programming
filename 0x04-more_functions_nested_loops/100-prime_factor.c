#include <stdio.h>
long prime(long n);
/**
 *main - function
 *Return: void
 */

int main(void)
{
	long num, div;

	/*num = 2547;*/
	num = 612852475143;
	div = 2;

	while (div < num / 2)
	{
		if (num % div == 0)
		{
			num /= div;
			div = 2;
		}
		else
		{
			div++;
		}
	}

	printf("%ld\n", num);

	return (0);
}
