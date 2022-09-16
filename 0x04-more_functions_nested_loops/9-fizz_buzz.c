#include <stdio.h>

/**
 * main - prints 1 to 100 if 3 print Fizz if 5 print Buzz and if 3 and 5 print FizzBuzz
 * 
 * Return: returns 0
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		
		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}
