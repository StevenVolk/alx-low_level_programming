#include <stdio.h>

/** main - print sum all multiples of 3 and 5 from 0 to 1024 (excluded)
 *
 * Return: returns 0
 */

int main(void)
{
	int i, sum;
	
	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	printf("%i\n", i);
	
	return (0);
}
