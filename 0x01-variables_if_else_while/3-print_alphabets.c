#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * Return: 0 when successful
*/
int main(void)
{
	char a = 'a';
	char z = 'A';

	while
		(a <= 'z')
		{
			putchar(a);
			a++;
		}
	while
		(z <= 'Z')
		{putchar(z);
			z++;
		}
	putchar('\n');
	return (0);
}
