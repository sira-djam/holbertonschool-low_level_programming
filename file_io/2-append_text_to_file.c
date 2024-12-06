#include "main.h"
/**
 * append_text_to_file - ajouter un texte a la fin
 * @filename: fichier
 * @text_content: contenur du texte
 * Return: always
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int lg;
	int add_var;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		close(fd);
		return (1);

	while (text_content[lg])
		lg++;

	add_var = write(fd, text_content, lg);
	close(fd);
	if (add_var == -1)
		return (-1);
	return (1);
}
