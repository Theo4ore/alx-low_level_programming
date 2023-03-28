#include <stdio.h>
/**
 * swap_int - Swap the values of two integers
 * @a: Integer1 to be swaped
 * @b: Integer2 to be swapped
 *
 * Return: null
*/
void swap_int(int *a, int *b)
/* function that swaps the values of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
