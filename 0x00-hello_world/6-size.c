#include <stdio.h>
/**
 * main - print out data types sizes in c programming
 *
 * Return: 0
*/
int main(void)
{
	char a;
	int p;
	long int q;
	long long int r;
	float s;

	printf("Size of a char: %lu byte(S)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(S)\n", (unsigned long)sizeof(p));
	printf("Size of a long int: %lu byte(S)\n", (unsigned long)sizeof(q));
	printf("Size of a long long int: %lu byte(S)\n", (unsigned long)sizeof(r));
	printf("Size of a float int: %lu byte(S)\n", (unsigned long)sizeof(s));
	return (0);
}
