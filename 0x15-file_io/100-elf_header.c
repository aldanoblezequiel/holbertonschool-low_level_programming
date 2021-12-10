#include "main.h"
/**
*main - base
*@argc: pointer1
*@argv: elem
*Return: void
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - copies a file
  * @src: str1
  * @dest: str2
  * Return: null
  */
void copy_file(const char *src, const char *dest)
{
	int aux, tfd, readed;
	char buff[1024];

	aux = open(src, O_RDONLY);
	if (!src || aux == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	tfd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(aux, buff, 1024)) > 0)
	{
		if (write(tfd, buff, readed) != readed || tfd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}
}
