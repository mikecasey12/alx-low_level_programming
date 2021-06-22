#include "holberton.h"
/**
 * print_alphabet - a function that prints the alphabet 'a-z'
 * Return: On success 0.
 */
void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
