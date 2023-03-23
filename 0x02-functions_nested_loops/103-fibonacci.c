#include <stdio.h>
/**
* main - Print the sum of the even-valued terms
* of Fibonacci less than 4000000.
* Return: 0 Always
*/
int main(void)
{
	inti x = 0;
	long y = 1, z = 2, sum = z;

	while (k + j < 4000000)
	{
		k += y;
		if (z % 2 == 0)
		sum += z;
		y = z - y;
		++x;
	}
	printf("%ld\n", sum);
	return (0);
}
