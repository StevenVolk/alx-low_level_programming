#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 *
 * @a: matrix
 * @size: size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	i = 0;
	j = size - 1;
	sum1 = 0;
	sum2 = 0;
	while (i <= (size * size))
	{
		sum1 += a[i];
		i = i + size + 1;
	}
	printf("%d, ", sum1);
	while (j < (size * size))
	{
		sum2 += a[j];
		j = j + size - 1;
	}
	printf("%d\n", sum2);
}
