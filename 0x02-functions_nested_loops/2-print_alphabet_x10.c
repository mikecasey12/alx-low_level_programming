#include "holberton.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet 'a-z' 10 times
 * Return: On success 0.
 */
void print_alphabet_x10(void)
{
	int i = 1;

	while (i <= 10)
	{
		char ch = 'a';

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
			ch++;
		}
		i++;
		_putchar('\n');
	}
}
