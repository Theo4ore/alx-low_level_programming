#include "main.h"
#include <stdio.h>
/**
 * rot13 - Encodes a string using rot13.
 * @t: Pointer to string
 * Return: *t
 */
char *rot13(char *t)
{
	int x, y;
	char d1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char dr[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (x = 0; t[x] != '\0'; x++)
	{
		for (y = 0; y < 52; y++)
			if (t[x] == d1[y])
			{
				t[x] = dr[y];
				break;
			}
	}
	return (t);
}
