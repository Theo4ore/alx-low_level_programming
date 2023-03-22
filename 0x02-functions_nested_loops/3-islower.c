#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: character alone to be checked for
 *
 * Return: 1 if c is lowercase or 0 if otherwise
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	return (0);
}
