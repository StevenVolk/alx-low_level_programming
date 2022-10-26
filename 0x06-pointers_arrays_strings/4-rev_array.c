/**
 * reverse_array - reverses an array of interger
 * @a: array of intergers
 * @n: number of intergers to be swapped
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, k;

	i = 0;
	k = n / 2;
	while (i < k)
	{
		a[i] = a[n - i];
		i++;
	}
}
