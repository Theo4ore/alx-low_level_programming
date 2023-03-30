#include "main.h"
/**
 * _strncat - Concatenates two strings
 * @dest: String to be appended
 * @src: String to be appended to destination
 * @n: bytes from source to be appended to destination
 *
 * Return: Pointer to resulting destination as string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, c = 0;

	while (dest[i++])
		c++;
	for (i = 0; src[i] && i < n; i++)
		dest[c++] = src[i];
	return (dest);
}
