#include "main.h"
/**
 * _strcpy - To copy a string
 * @dest: Destination
 * @src: Source
 *
 * Return: Point to Destination
 */
char *_strcpy(char *dest, char *src)
{
	int t;

	for (t = 0; src[t] != '\0'; t++)
	{
		dest[t] = src[t];
	}
	dest[t++] = '\0';
	return (dest);
}
