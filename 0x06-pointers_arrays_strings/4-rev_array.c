#include "main.h"
/**
 * reverse_array - Reverse the content of an array of integers
 * @a: Array of integers
 * @n: Number of elements in the array
 *
 * Return: Null
 */
void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
