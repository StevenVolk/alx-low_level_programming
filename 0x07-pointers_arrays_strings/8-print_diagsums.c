/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 *
 * @a: matrix
 * @size: size of the square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	i = 0;
	j = 0;
	sum1 = 0;
	sum2 = 0
	while (i < size)
	{
		sum1 += a[i][i];
		i++;
	}
	printf("%d, ", sum1);
	while (j < size)
	{
		sum2 += a[j][i];
		j++;
	}
	printf("%d\n", sum2);
}
