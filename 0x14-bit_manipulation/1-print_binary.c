#include "main.h"
/**
 * print_binary - Entry Point
 * @n: dec input
 * Return: 0
 */
void print_binary(unsigned long int n)
{
	unsigned long int range = 2147483648;

	if (n == 0)
	{
		printf("0");
	}
xy:
	if (range > 0)
	{
		if ((n & range) == 0)
		{
			range = range >> 1;
			goto xy;
		}
		else
			while (range > 0)
			{
				if ((n & range) == 0)
					printf("0");
				else
					printf("1");
				range = range >> 1;
			}
	}
}
