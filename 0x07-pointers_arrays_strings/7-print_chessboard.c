#include "main.h"

/**
 * print_chessboard - prints a chess board
 *
 * @a: number of rows
 */

void print_chessboard(char (*a)[8])
{
	int i, j, k;

	k = 0;
	while (a[k])
		k++;
	for (i = 0; i < k; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (a[i][j] == ' ')
				_putchar('0' + ' ');
			else
				_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
