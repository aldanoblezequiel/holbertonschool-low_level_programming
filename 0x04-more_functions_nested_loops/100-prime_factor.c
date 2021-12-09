#include <stdio.h>

/**
 *main - function
 *Return: void
 */

int main(void)
{
	long int execute;
	long int primes = 2;
	long int max = 612852475143;

	for (execute = primes; execute <= 612852475143;)
	{
		if (max % primes == 0)
		{
			printf("%lu", primes);
			break;
		}
	}
	return (0);
}
