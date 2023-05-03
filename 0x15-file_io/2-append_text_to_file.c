#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw, len = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (text_content == NULL)
        {
                close(fd);
                return (1);
        }
	if (fd == -1)
		return (-1);

	while (text_content[len])
		len++;

	if (text_content)
		fdw = write(fd, text_content, len);
	if (fdw == -1)
		return (-1);
	close(fd);
	return (1);
}
