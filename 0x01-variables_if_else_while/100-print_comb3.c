#include <stdio.h>
/**
 * main - Print all possible different combinations of two digits
 *
 * Return: 0 as SUCCESS
*/
int main(void)
{
	int q;
	int r;

	for (q = 10; q <= 19; q++)
	{
		for (r = 10; r <= 19; r++)
		{
			if ((r % 10) > (q % 10))
			{
				putchar((q % 10) + '0');
				putchar((r % 10) + '0');
				if (q != 18 || r != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
