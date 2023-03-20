#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 Always
*/
int main(void)
{
	char alphabets[26] = "abcdefghijklmnopqrstuvwxyz";
	int a;

	for (a = 0; a < 26; a++)
	{
		putchar(alphabets[a]);
	}
	putchar('\n');
	return (0);
}
