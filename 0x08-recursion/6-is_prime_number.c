#include "main.h"
#include <stdio.h>
int chk_prime(int n, int t);
/**
 * is_prime_number - Return prime number
 * @n: Number to be tested
 *
 * Return: Integer
 */
int is_prime_number(int n)
{
	return (chk_prime(n, 1));
}
/**
 * chk_prime - Check prime number
 * @n: Number to be tested
 * @t: Iterative value
 * Return: 1 for prime and 0 for composite
 */
int chk_prime(int n, int t)
{
	if (n <= 1)
		return (0);
	if (n % t == 0 && t > 1)
		return (0);
	if ((n / t) < t)
		return (1);
	return (chk_prime(n, t + 1));
}
