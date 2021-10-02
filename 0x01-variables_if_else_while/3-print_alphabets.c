#include <stdio.h>
/**
*main - print alpha upp and low
*Return: 0
*/
int main(void)
{
	char alpha, alpha1;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	putchar (alpha);

	for (alpha1 = 'A' ; alpha1 <= 'Z' ; alpha1++)
	putchar (alpha1);
	putchar ('\n');
	return (0);
}
