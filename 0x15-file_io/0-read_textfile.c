#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of text file
 * @letters: number of letters it should read and print
 * Return: 0 if filename can't be opened or read, or number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read_out;
	char *characters = malloc(sizeof(char *) * letters);

	if (!characters)
	{
		free(characters);
		return (0);
	}

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	read_out = read(fd, characters, letters);
	write(STDOUT_FILENO, characters, read_out);
	free(characters);
	close(fd);
	return (read_out);
}
