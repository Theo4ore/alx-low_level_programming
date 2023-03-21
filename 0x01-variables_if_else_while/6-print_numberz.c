#include <stdio.h>
/**
 * main - Entry point
 * Print all single digit numbers of base ten using putchar
 *
 * Return: 0 Always as SUCCESS
*/
int main(void)
{
	int q;

	for (q = '0'; q <= '9'; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
