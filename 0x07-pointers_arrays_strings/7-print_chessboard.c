#include "main.h"
/**
 * print_chessboard - Print the chessboard.
 * @a: Array
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int t, h;

	for (t = 0; t < 8; t++)
	{
		for (h = 0; h < 8; h++)
			_putchar(a[t][h]);
		_putchar('\n');
	}
}
