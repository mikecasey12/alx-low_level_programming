#include<stdio.h>
/**
* main - prints numbers
* Return: prints single digits of base 10
*/

int main(void)
{
	int ch = 0;

	while (ch < 10)
	{
		putchar(ch + '0');
		ch++;
	}
	putchar('\n');
	return (0);
}
