#include "holberton.h"
/**
 * print_last_digit - a function that prints the last digits of numbers
 * @n: integer input
 * Return: last digit of n.
 */
int print_last_digit(int n)
{
	return (n * (n % 10));
}
