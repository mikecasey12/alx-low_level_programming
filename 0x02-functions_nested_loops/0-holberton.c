#include<stdio.h>
#include "holberton.h"
/**
* main - prints Holberton
* Return: prints the word Holberton returns 0
*/

int main(void)
{
	char *ch = "Holberton";

	while (*ch)
	{
		_putchar(*ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
