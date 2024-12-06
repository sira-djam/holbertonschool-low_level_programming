#include "main.h"

/**
 * read_textfile - lire le fichier et afficher son contenu
 * @filename: pointer
 * @letters: lettre identifier
 * Return: print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t lect, print;
	int fd = 0;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	lect = read(fd, buffer, letters);
	if (lect == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	print = write(STDOUT_FILENO, buffer, lect);
	free(buffer);
	close(fd);
	return (print);
}
