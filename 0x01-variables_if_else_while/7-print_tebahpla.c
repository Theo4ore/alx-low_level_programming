#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 as SUCCESS
*/
int main(void)
{
	char low_r;

	for (low_r = 'z'; low_r >= 'a'; low_r--)
	{
		putchar(low_r);
	}
	putchar('\n');
	return (0);
}
