#include "holberton.h"
/**
 * times_table - a function that prints the multiplication of 9
 * Return: multiplication of 9.
 */
void times_table(void)
{
	int r, c, a;

	for (r = 0; r <= 9; r++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (c = 1; c <= 9; c++)
		{
			a = (r * c);
			if ((a / 10) > 0)
			{
				_putchar((a / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((a % 10) + '0');

			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}

}
