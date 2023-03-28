#include "main.h"
#include <stdio.h>
/**
 * print_array - Print array of integers, followed by a new line.
 * @n: num of elements
 * @a: Group of integers list
 *
 * Return: Void
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
