#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of time the character _ should be printed
 * Return: returns the number of _ that was printed
 */

void print_line(int n)
{
	int m = 0;

	while (m < n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		} else
		{
			_putchar('_');
		}
		m++;
	}
	_putchar('\n');
}
