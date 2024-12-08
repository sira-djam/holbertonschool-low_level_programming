#include "main.h"
/**
 * create_file - creer un fichier
 * @filename: nom du fichier
 * @text_content: text
 * Return: always
 */
int create_file(const char *filename, char *text_content)
{
	int fd = 0;
	ssize_t print;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	print = write(fd, text_content, strlen(text_content));
	if (print == -1)
	{
		close(fd);
		return (-1);
	}
	return (1);
}
