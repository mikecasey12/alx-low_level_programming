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

	if (s[i] == NULL)
	{
		printf("\n");
	}
	else if (s[i] == '\0')
		return;
	printf("%s\n", s);
	i++;
}
