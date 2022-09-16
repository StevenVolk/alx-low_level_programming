#include <stdio.h>

/**
 * main - prints 1 to 100 if multiples of 3 print Fizz if multiples of 5 print Buzz 
 * and if both multiple of 3 and 5 print FizzBuzz
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	putchar('\n');
	return (0);
}
