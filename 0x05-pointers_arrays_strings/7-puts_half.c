#include "main.h"
/**
 * puts_half - Print half of a string, followed by a new line.
 * @str: String to be printed
 *
 * Return: Void
*/
void puts_half(char *str)
{
	int x, y;

	x = 0;
	while (str[x] != '\0')
	{
		x++;
	}
	if (x % 2 == 1)
	{
		y = (x - 1) / 2;
		y += 1;
	}
	else
	{
		y = x / 2;
	}
	for (; y < x; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
