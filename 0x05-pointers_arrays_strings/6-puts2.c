#include <stdio.h>
#include "holberton.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string input
 * Return: returns every other character of a string
 */

void puts2(char *str)
{
	int len;
	char c = str[0];

	for (len = 0; str[len] != '\0'; len++)
	{
		_putchar(str[i++]);
	}
	_putchar('\n');
}
