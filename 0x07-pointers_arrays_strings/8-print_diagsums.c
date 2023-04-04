#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of the two diagonals of a square matrix of integers.
 * @a: Input
 * @size: Input
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int s1, s2, t;

	s1 = 0;
	s2 = 0;

	for (t = 0; t < size; t++)
	{
		s1 = s1 + a[t * size + t];
	}
	for (t = size - 1; t >= 0; t--)
	{
		s2 += a[t * size + (size - t - 1)]
	}
	printf("%d, %d\n", s1, s2);
}
