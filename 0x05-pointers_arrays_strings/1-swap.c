#include <stdio.h>

/**
 * swap_int - swaps the values of the integers.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: n
 */
void swap_int(int *a, int *b)
/* the function that swap the value of two integer. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
	
