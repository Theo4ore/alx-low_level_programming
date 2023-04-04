#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @c: input to be entered
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
