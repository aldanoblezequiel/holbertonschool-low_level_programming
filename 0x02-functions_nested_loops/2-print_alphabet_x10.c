#include "main.h"
#include <stdio.h>
/**
*print_alphabet_x10 -Alpha x 10
*Return: 0
*/
void print_alphabet_x10(void)
{
	int alpha, n;

	for (n = 0; n <= 9; n++)
	{
		for (alpha = 'a' ; alpha <= 'z' ; alpha++)
		_putchar (alpha * 10);
		_putchar ('\n');
	}
}
