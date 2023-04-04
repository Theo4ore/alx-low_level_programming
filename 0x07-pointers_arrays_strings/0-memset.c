#include "main.h"
/**
 * _memset - Function that fills memory with a constant byte.
 * @b: desired value
 * @n: number of bytes
 * @s: address of memory to be filled
 *
 * Return: Array value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int t = 0;

	for (; n > 0; t++)
	{
		s[t] = b;
		n--;
	}
	return (s);
}
