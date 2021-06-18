#include<stdio.h>
/**
* main - prints numbers with ,
* Return: prints single digits of base 10 with commas and space
*/

int main(void)
{
	int ch = 0;

	while (ch <= 9)
	{
		putchar(ch + '0');
		if (ch != 9)
		{
			putchar(',');
			putchar(' ');
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
