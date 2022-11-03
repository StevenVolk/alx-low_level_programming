/**
 * _sqrt_recursion - finds natural square root of a number
 *
 * @n: number
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n <= 0)
		return (-1);
	for (i = 1; i < ((n / 2) + 1); i++)
	{
		if ((i * i) == n)
		{
			return (i);
		}
	}
	return (-1);
}
