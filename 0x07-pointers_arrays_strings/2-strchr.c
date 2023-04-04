#include "main.h"
/**
 * _strchr - Function to locate a character in a string.
 * @c: Input
 * @s: Input
 *
 * Return: 0 as SUCCESS
 */
char *_strchr(char *s, char c)
{
	int t = 0;

	for (; s[t] >= '\0'; t++)
	{
		if (s[t] == c)
			return (&s[t]);
	}
	return (0);
}
