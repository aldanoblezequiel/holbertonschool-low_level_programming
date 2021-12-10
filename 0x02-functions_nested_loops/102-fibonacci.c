#include <stdio.h>

/**
 * main - fibonacci
 * Return: void
 */
int main(void)
{
	int i;
	long int n1, n2, nf;

	n1 = 1;
	n2 = 2;
	printf("%ld, %ld", n1, n2);
	for (i = 0; i < 48; i++)
	{
		nf = n1 + n2;
		printf(", %ld", nf);
		n1 = n2;
		n2 = nf;
	}
	printf("\n");
	return (0);
}
