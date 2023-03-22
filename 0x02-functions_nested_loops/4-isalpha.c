#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character alone to be checked
 * Return: 1 if c is a letter or 0 if otherwise
*/
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	{
		return (1);
	}
	return (0);
}
