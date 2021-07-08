#include "holberton.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that prints a string
 * @s: string input
 * Return: prints a string
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
