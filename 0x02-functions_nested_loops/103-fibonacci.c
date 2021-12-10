#include <stdio.h>
/**
 * main - fibonacci 2
 *Return: void
 */
int main(void)
{
	long int n1, n2, nf, aux;

	n1 = 1;
	n2 = 2;
	nf = 0;
	aux = 0;
	while (nf <= 4000000)
	{
		nf = n1 + n2;
		n1 = n2;
		n2 = nf;
		if ((n1 % 2) == 0)
		{
			aux += n1;
		}
	}
	printf("%ld\n", aux);
	return (0);
}
