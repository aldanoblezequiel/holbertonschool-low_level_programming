#include "main.h"
/**
 * read_textfile - Reads a file
 * @filename: Name
 * @letters: Number of letters
 * Return: Number
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int n, c, a;

	if (!filename)
		return (0);

	n = open(filename, O_RDONLY);

	if (n == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
	{
		close(n);
		return (0);
	}

	a = read(n, buffer, letters);
	c = write(STDOUT_FILENO, buffer, a);
	if (c == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(n);
	return (c);
}
