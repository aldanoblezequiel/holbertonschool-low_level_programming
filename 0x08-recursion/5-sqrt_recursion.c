#include "main.h"
/**
*_sqrt - Extra function for _sqrt_recursion
*@root: root xd
*@i: int variable
*
*Return: root of root
*/
int _sqrt(int root, int i)
{
	if (i * i > root)
		return (-1);
	if (i * i == root)
		return (i);
	return (_sqrt(root, (i + 1)));
}

/**
* _sqrt_recursion - Returns natural square root
*@n: root xd x2
*Return: Root
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}
