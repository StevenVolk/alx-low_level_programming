/** 
 * chk_sqrt - checks for natural square root of a number n
 *
 * @n: number
 * Return: the natural square root of a number
 */

int chk_sqrt(int n, int i)
{
	if (i * i < n)
		return (chk_sqrt(n, (i + 1)));
	else if (i * i == n)
		return (i);
	else
		return (-1);
}
 
/**
 * _sqrt_recursion - finds natural square root of a number
 *
 * @n: number
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (chk_sqrt(n, 1));
}
