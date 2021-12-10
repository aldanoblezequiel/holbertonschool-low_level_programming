#include "main.h"
#include <stdlib.h>

/**
 * word_count - counter
 * @str: atr var
 * Return: 0
 */
int word_count(char *str)
{
	int count;
	int i;

	i = count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
		{
			count++;
			i++;
		}
		i++;
	}
	return (count);
}

/**
 * find_words_len - find lwn xd
 * @str: xd lol
 * @words: words xd
 * Return: 1
 */
int *find_words_len(char *str, int words)
{
	int i, word, len;
	int *sizes;

	sizes = malloc(words * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	i = word = 0;
	while (word < words)
	{
		if (str[i] != ' ')
		{
			len = 0;
			while (str[i] != ' ')
			{
				len++;
				i++;
			}
			len++;
			sizes[word] = len;
			word++;
		}
		i++;
	}
	return (sizes);
}

/**
 * strtow - Split a string into words
 * @str: String to split
 *
 * Return: Return pointer to array of strings, NULL fail
 */
char **strtow(char *str)
{
	char **nstr;
	int aux, i, j, k, cur_words, *sizes;

	if (str == NULL || *str == '\0')
		return (NULL);
	aux = word_count(str);
	sizes = malloc(aux * sizeof(int));
	if (sizes == NULL)
		return (NULL);
	sizes = find_words_len(str, aux);
	nstr = malloc((aux + 1) * sizeof(char *));
	if (nstr == NULL)
		return (NULL);
	i = j = k = 0;
	while (i < aux && str[j] != '\0')
	{
		cur_words = i;
		nstr[i] = malloc(sizes[i] + sizeof(char));
		if (nstr[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(nstr[i--]);
			free(nstr);
			return (NULL);
		}
		while (str[j] != '\0' && i == cur_words)
		{
			if (str[j] != ' ')
			{
				while (str[j] != '\0' && str[j] != ' ')
				{
					nstr[i][k] = str[j]; j++; k++;
				}
				nstr[i][k] = '\0';
				i++;
				k = 0;
			}
			j++;
		}
	}
	nstr[i] = NULL;
	free(sizes);
	return (nstr);
}
