/**
 * chk_prime - checks if a number is prime
 *
 * @n: number to be checked
 * @i: divisor
 * Return: 1 if a prime number, otherwise 0
 */

int chk_prime(int n, int i)
{
	if ((i <= (n / 2)) && ((n % i) != 0))
		return (chk_prime(n, i + 1));
	else if (i != n)
		return (0);
	else
		return (1);
}

/**
 * is_prime_number - finds if a number is prime
 *
 * @n: number to be checked
 * Return: 1 if a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (chk_prime(n, 2));
}
