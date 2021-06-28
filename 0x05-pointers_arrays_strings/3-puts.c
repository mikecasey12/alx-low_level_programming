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

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
