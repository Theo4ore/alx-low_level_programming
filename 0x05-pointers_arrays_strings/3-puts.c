#include "main.h"
/**
 * _puts - a string, followed by a new line, to stdout
 * @str: a string
 *
 * Return: null
*/
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
