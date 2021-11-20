#include "main.h"
/**
 * get_endianness - Not end
 * Return: 0
 */
int get_endianness(void)
{
	unsigned int n = 1;
	char *c = (char *)&n;

	if (*c)
		return (1);
	else
		return (0);
}
