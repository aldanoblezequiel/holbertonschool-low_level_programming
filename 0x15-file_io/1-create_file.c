#include "main.h"
/**
 *create_file - Creates a file
 *@filename: Name
 *@text_content: Content
 *Return: a number
 */
int create_file(const char *filename, char *text_content)
{
	int n, c, w;

	if (!filename)
		return (-1);

	n = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (!text_content)
		return (1);
	if (n == -1)
		return (-1);
	for (c = 0; text_content[c]; c++)
	{

	}
	w = write(n, text_content, c);
	if (w == -1)
	{
		close(n);
		return (-1);
	}
	close(n);
	return (1);
}
