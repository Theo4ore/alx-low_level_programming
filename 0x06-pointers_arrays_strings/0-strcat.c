#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: String destination
 */
char *_strcat(char *dest, char *src)
{
	int c = 0, i;

	while (dest[c])
	{
		c++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[c] = src[i];
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
