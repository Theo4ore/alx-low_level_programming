#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @a: Input
 * @size: Input
 * Return: 0 ALWAYS
 */
void print_diagsums(int *a, int size)
{
	int t, h, s1 = 0, s2 = 0;

	for (t = 0; t <= (size * size); t = t + size + 1)
		s1 = s1 + a[t];
	for (h = size - 1; h <= (size * size) - size; h = h + size - 1)
		s2 = s2 + a[h];
	printf("%d, %d\n", s1, s2);
}
