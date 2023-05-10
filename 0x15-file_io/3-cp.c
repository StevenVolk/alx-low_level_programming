#include "main.h"

/**
 * main - main function
 * @argc: number of arguements
 * @argv: arguements
 */

int main(int argc, char **argv)
{
	int o, d, r;
	char b[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	o = open(argv[1], O_RDONLY);

	if (!argv[1] || o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	d = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);

	while ((r = read(o, b, 1024)) > 0)
	{
		if (write(d, b, r) != r || d == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(o) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}

	if (close(d) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d);
		exit(100);
	}

	exit(0);
}
