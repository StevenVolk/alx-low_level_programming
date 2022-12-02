/**
 * flip_bits - finds number of bits to flip to get from one number to another
 * @n: number
 * @m: another number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		n >>= 1;
		m >>= 1;
	}

	return (count);
}
