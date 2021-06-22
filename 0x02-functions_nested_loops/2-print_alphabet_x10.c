#include "holberton.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet 'a-z' 10 times
 * Return: On success 0.
 */
void print_alphabet_x10(void)
{
	for (int i = 1; i <= 10; i++)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
	_putchar('\n');
	}
}
