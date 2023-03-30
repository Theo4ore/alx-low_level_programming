#include "main.h"
/**
 * _strncpy - Function that copies a string
 * @dest: Store the string copy
 * @src: Source string
 * @n: Max. no. of bytes to copy
 *
 * Return: Pointer to string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, c = 0;

	while (src[i++])
		c++;
	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for (i = c; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
