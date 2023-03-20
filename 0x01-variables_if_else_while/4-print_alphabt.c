#include <stdio.h>
/**
 * main - Print all the letters except q and e
 *
 * Return: 0 Always
*/
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
			putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
