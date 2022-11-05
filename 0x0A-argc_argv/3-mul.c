#include <stdio.h>

/**
 * main - main function
 *
 * @argc: length of arguements
 * @argv: array of arguements
 * Return: Always 1
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
		return ("%d\n", argv[1] * argv[2]);
	else
		return("%s\n", "Error");
	return (1);
}
