#include "main.h"
/**
 * puts2 - Print every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: String to be printed
 * Return: Void
*/
void puts2(char *str)
{
	int x;
	int y = 0;

	while (str[y] != '\0')
	{
		y++;
	}
	for (x = 0; x < y; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
