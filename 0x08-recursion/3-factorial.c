#include "main.h"
/**
*factorial -Return the factorial of a number
*Return: 0
*@n: int variable
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * (factorial(n - 1)));
	}
}
