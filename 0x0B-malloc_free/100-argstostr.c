#include <stdlib.h>
/**
 * argstostr - paste the arguments
 * @argc: count
 * @argv: args
 * Return: aux
 */
char *argstostr(int argc, char *argv[])
{
	int pos_a, pos_c, c_len = 0, i = 0;
	char *aux;

	if (argc == 0 || argv == NULL)
		return (NULL);

	for (pos_a = 0; argv[pos_a] != 0; pos_a++)
		for (pos_c = 0; argv[pos_a][pos_c] != 0; pos_c++)
			c_len++;

	aux = malloc((c_len * sizeof(char) + argc + 1));

	if (aux == 0)
		return (NULL);




	for (pos_a = 0; argv[pos_a] != 0; pos_a++)
	{
		for (pos_c = 0; argv[pos_a][pos_c] != 0; pos_c++)
		{
			aux[i] = argv[pos_a][pos_c];
			i++;
		}
		aux[i] = '\n';
		i++;
	}

	return (aux);
}
