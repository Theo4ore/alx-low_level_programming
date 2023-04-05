#include "main.h"
/**
 * _puts_recursion - Print a string, followed by a new line
 * @s: Input
 * Return: 0 Always
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}