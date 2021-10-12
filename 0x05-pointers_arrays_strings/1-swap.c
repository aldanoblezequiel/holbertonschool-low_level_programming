#include "main.h"
/**
*swap_int -Changes or swap the values of two integers
*Return: 0
*@a: initial int
*@b: initial int xd
*/
void swap_int(int *a, int *b)
{
	(*a = *b);
	(*b = *a);
}
