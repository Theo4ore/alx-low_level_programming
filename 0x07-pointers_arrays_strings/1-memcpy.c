#include "main.h"
/**
 * _memcpy - Function that copies memory area.
 * @dest: Destination memory
 * @src: Source memory
 * @n: Number of bytes
 *
 * Return: n bytes copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int y = n;

	for  (; t < y; t++)
	{
		dest[t] = src[y];
		n--;
	}
	return (dest);
}
