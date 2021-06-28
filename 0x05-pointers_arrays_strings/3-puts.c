#include <stdio.h>
#include "holberton.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: char input
 * Return: returns a string of input.
 */

void _puts(char *str)
{
	int len;
	char c = str[0];

	for (len = 0; len <= c; len++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
