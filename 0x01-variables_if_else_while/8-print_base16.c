#include<stdio.h>
/**
* main - prints hexadecimals
* Return: prints hexadecimals of base 16
*/

int main(void)
{
	char ch = 1;
	char ch2 = 'a';

	while (ch < 10)
	{
		putchar(ch + '0');
		ch++;
	}
	while (ch2 <= 'f')
	{
		putchar (ch2);
		ch2++;
	}
	putchar('\n');
	return (0);
}
