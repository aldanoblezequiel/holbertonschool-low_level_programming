#include "main.h"
/**
 * infinite_add - infinite adding
 * @n1: number1
 * @n2: number2
 * @r: rest
 * @size_r: size rest
 * Return: add
 *
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)

{

	int e = 0, j = 0, k, l = 0, f, s, d = 0;

	while (n1[e] != '\0')
		e++;
	while (n2[j] != '\0')
		j++;
	if (e > j)
		l = e;
	else
		l = j;
	if (l + 1 > size_r)
		return (0);
	r[l] = '\0';
	for (k = l - 1 ; k >= 0 ; k--)
	{
		e--;
		j--;
		if (e >= 0)
			f = n1[e] - '0';
		else
			f = 0;
		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[k] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[l + 1] = '\0';
		if (l + 2 > size_r)
			return (0);
		while (l-- >= 0)
			r[l + 1] = r[l];
		r[0] = d + '0';
	}
	return (r);
}
