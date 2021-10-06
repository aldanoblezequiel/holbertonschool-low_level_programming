#include "main.h"
/**
*print_alphabet_x10 -Alpha x 10
*Return: 0
*/
void print_alphabet_x10(void)
{
	char alpha;

	for (alpha = 'a' ; alpha <= 'z' ; alpha++)
	_putchar (alpha * 10);
	_putchar ('\n');
}
