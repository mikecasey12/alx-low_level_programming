#include "holberton.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14
 *
 * Return: returns 0 on success.
 */

void more_numbers(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m <= 14; m++)
		{
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
			}
			_putchar((m % 10) + '0');
		}
		_putchar('\n');
	}
}
