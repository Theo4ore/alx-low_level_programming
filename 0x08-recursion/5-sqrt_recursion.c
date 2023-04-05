#include "main.h"
#include <stdio.h>
int _sqrt(int n, int t);
/**
 * _sqrt_recursion - Function that returns the natural square root of a number.
 * @n: Number to be computed
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - Computes the square root of a number
 * @n: Number to be computed
 * @t: Iterative number
 * Return: Positive integer
 */
int _sqrt(int n, int t)
{
	int sqr = t *t;

	if (sqr > n)
		return (-1);
	if (sqr == n)
		return (t);
	return (_sqrt(n, t + 1));
}
