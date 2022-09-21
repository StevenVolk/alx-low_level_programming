#include <stdio.h>

/**
 * swap_int - swaps two variable a and b
 * @a: first variable to be swapped
 * @b: second variavle to be swapped
 * @temp: temporary varible for swapping
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
