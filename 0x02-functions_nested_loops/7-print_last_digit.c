#include "holberton.h"
/**
 * print_last_digit - a function that prints the last digits of numbers
 * @n: integer input
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
	int ln;

	ln = (n % 10);
	if (ln < 0)
	{
		ln = (-1 * ln);
	}
	_putchar(ln + '0');
	return (ln);
}
