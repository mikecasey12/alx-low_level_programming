#include "holberton.h"
/**
 * _isalpha - a function that prints identifies lowercases and uppercases
 * @c: single letter input
 * Return: On success 1.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
