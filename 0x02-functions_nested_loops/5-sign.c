#include "main.h"
/**
 * print_sign - Print the sign of a number.
 * @n: number to be checked
 * Return: 1 if number is positive, -1 if number is negative else 0
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
