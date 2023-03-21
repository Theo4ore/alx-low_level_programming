#include <stdio.h>
/**
 * main - Printall possible combinations of two two-digit numbers
 *
 * Return: 0 as Success
*/
int main(void)
{
	int p;
	int r;

	for (p = 0; p <= 99; p++)
	{
		for (r = p; r <= 99; r++)
		{
			putchar(p / 10 + '0');
			putchar(p % 10 + '0');
			putchar(' ');
			putchar(r / 10 + '0');
			putchar(r % 10 + '0');
			if (!(p == 98 && r == 99))
			{
				putchar(',');
				putchar(' ');
			}

		}

	}
	putchar('\n');
	return (0);
}
