#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Print all natural numbers from n to 98
 * @x: number to start with
 * Return: 0 Success
*/
void print_to_98(int x)
{
	if (x <= 98)
	{
		for (; x <= 99; x++)
		{
			if (x == 98)
			{
				printf("%d", x);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", x);
			}
		}
	}
	else
	{
		for (; x >= 98; x--)
		{
			if (x == 98)
			{
				printf("%d", x);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", x);
			}
		}
	}
}
