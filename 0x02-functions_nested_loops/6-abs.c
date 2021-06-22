#include "holberton.h"
/**
 * _abs - a function that prints the absolute of numbers
 * @n: integer input
 * Return: absolute value of n.
 */
int _abs(int n)
{
	return (n * ((n > 0) - (n < 0)));
}
