#include "main.h"
/**
 * _strspn - Get the length of a prefix substring.
 * @accept: Input
 * @s: Input
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;
	int y;

	while (*s)
	{
		for (y = 0; accept[y]; y++)
		{
			if (*s == accept[y])
			{
				t++;
				break;
			}
			else if (accept[y + 1] == '\0')
				return (t);
		}
		s++;
	}
	return (t);
}
