#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid passwords
 * for the program 101-crackme
 *
 * Return: 0 Always
 */
int main(void)
{
	char passwd[84];
	int i = 0, sum = 0, d1, d2;

	srand(time(0));

	while (sum < 2772)
	{
		passwd[i] = 33 + rand()% 94;
		sum += passwd[i++];
	}
	passwd[i] = '\0';
	if (sum != 2772)
	{
		d1 = (sum - 2772) / 2;
		d2 = (sum - 2772) / 2;
		if ((sum -2772) % 2 != 0)
			d1++;
		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + d1))
			{
				passwd[i] -= d1;
				break;
			}
		}
		for (i = 0; passwd[i]; i++)
		{
			if (passwd[i] >= (33 + d2))
			{
				passwd[i] -= d2;
				break;
			}
		}
	}
	printf("%s", passwd);
	return (0);
}
