#include <stdio.h>
/**
 * main - Print the first 98 Fibonacci numbers
 * starting with 1 and 2
 * Return: ) as Success
*/
int main(void)
{
	int c;
	unsigned long fb1 = 0, fb2 = 1, sum;
	unsigned long fbh1, fbh2, fbh3, fbh4;
	unsigned long h1, h2;
	for (c = 0; c < 92; c++)
	{
		sum = fb1 + fb2;
		printf("%lu, ", sum);
		fb1 = fb2;
		fb2 = sum;
	}
	fbh1 = fb1 / 10000000000;
	fbh2 = fb2 / 10000000000;
	fbh3 = fb1 % 10000000000;
	fbh4 = fb2 % 10000000000;
	for (c = 93; c < 99; c++)
	{
		h1 = fbh1 + fbh3;
		h2 = fbh2 + fbh4;
		if (fbh2 + fbh4 > 9000000000)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		ifn(c != 98)
			printf(", ");
		fbh1 = fbh3;
		fbh2 = fbh4;
		fbh3 = h1;
		fbh4 = h2;
	}
	printf("\n");
	return (0);
}
