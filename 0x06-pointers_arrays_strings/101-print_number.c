#include "main.h"
/**
 * print_number - Prints an integer.
 * @n: Integer
 *
 * Return: 0 Always
 */
void print_number(int n)
{
	unsigned int x;

	x = n;

	if (n < 0)
	{
		_putchar('-');
		x = -n;
	}
	if (x / 10 != 0)
	{
		print_number(x / 10);
	}
	_putchar((x % 10) + '0');
}
