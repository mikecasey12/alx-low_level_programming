#include "holberton.h"
/**
 * _islower - a function that prints identifies lowercases
 * @c: single letter input
 * Return: On success 1.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
