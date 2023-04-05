#include "main.h"
/**
 * _pow_recursion - Function that returns x to the power of y.
 * @x: Input
 * @y: Input
 *
 * Return: Integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
