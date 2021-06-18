#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print combinations
 * Return: print combinations of numbers from 0 - 90
 */
int main(void)
{
	int d;

	for (d = 1; d < 90; d++)
	{
		if (d != 10)
		{
			putchar((d / 10) + '0');
			putchar((d % 10) + '0');
		}
		if (d != 89 && d != 10)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
