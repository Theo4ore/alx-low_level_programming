#include "main.h"
/**
 * string_toupper - Change all  lower case to upper case.
 * @str: String to be changed.
 * Return: Pointer to string.
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
		i++;
	}
	return (str);
}
