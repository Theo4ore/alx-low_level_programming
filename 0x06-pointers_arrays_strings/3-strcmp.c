#include "main.h"
/**
 * _strcmp - Function that compares two strings
 * @s1: String1
 * @s2: String2
 *
 * Return: If s1 < s2, the negative diff. of  the first unmatched characters.
 * If s1 > s2, positive diff. of the first unmatched characters
 * Then, If s2 == s1, 0.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
