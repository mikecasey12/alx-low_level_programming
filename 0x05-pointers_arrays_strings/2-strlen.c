#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string input
 * Return: return success.
 */

int _strlen(char *s)
{
	int i = 1, len = 0;
	char c = s[0];

	while (c != '\0')
	{
		len++;
		c = s[i++];
	}
	return (len);
}
