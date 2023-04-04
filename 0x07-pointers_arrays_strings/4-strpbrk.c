#include "main.h"
/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @accept: Input
 * @s: Input
 *
 * Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int t;

	while (*s)
	{
		for (t = 0; accept[t]; t++)
		{
			if (*s == accept[t])
				return (s);
		}
		s++;
	}
	return ('\0');
}
