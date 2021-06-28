#include <stdio.h>
#include "holberton.h"

/**
 * print_rev - a function that prints a string in reverse
 * recount is to count to the end, len2 is to count back
 * @s: string input
 * Return: returns the reversed of the string
 */

void print_rev(char *s)
{
	int recount = 0;
	int len, len2;

	for (len = 0; s[len] != '\0'; len++)
	{
		recount++;
	}

	for (len2 = (recount - 1); len2 >= 0; len2--)
	{
		_putchar(s[len2]);
	}
	_putchar('\n');
}
