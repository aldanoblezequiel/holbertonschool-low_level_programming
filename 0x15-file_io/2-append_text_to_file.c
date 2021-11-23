#include "main.h"
/**
 *append_text_to_file - Appends a text in a file.
 *@filename: Name
 *@text_content: Content
 *Return: 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int n, c, w;

	if (!filename)
		return (-1);

	n = open(filename, O_WRONLY | O_APPEND);
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
