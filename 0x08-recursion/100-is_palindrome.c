#include "main.h"
/**
 * _strlen_recursion - Length of a string.
 * @s: String
 *
 * Return: Length of String
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparer - Compares characters in a string
 * @s: String
 * @t1: Iterator 1
 * @t2: Iterator 2
 * Return: .
 */
int comparer(char *s, int t1, int t2)
{
	if (*(s + t1) == *(s + t2))
	{
		if (t1 == t2 || t1 == t2 + 1)
			return (1);
		return (0 + comparer(s, t1 + 1, t2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - Check for palindrome.
 * @s: String
 * Return: 1 for palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparer(s, 0, _strlen_recursion(s) - 1));
}
