#include <stdio.h>
/**
 * main - Print all the numbers of base sixteen in lowercase
 *
 * Return: 0 as SUCCESS
*/
int main(void)
{
	char t;

	for (t = '0'; t <= '15'; t++)
	{
		putchar(t);
	}
	for (t = 'a'; t <= 'o'; t++)
	{
		putchar(t);
	}
	putchar('\n');
	return (0);
}
