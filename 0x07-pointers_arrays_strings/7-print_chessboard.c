#include "main.h"

/**
 * print_chessboard - prints a chess board
 *
 * @a: number of rows
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; a[i]; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[j]);
		_putchar('\n');
	}
}
