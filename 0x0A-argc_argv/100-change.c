#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: arg count
 * @argv: args
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int coin[] = {25, 10, 5, 2, 1};
	int pos, res = 0;
	int dol;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	dol = atoi(argv[1]);

	for (pos = 0; dol > 0;)
	{
		if (coin[pos] > dol)
			pos++;
		else
		{
			dol -= coin[pos];
			res++;
		}
	}
	printf("%d\n", res);

	return (0);
}
