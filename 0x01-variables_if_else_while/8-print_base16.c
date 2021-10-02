#include <stdio.h>
/**
*main - print base 16 low
*Return: 0
*/

	int main(void)
	{
		int n, n1;

	for (n = '0'; n <= '9'; n++)
	putchar(n);
	for (n1 = 'a'; n1 <= 'f'; n1++)
	putchar(n1);
	putchar('\n');
	return (0);
}
