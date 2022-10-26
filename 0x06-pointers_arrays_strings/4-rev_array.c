/**
 * reverse_array - reverses an array of interger
 * @a: array of intergers
 * @n: number of intergers to be swapped
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, k, temp;

	i = 0;
	k = n / 2;
	while (i < k)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
