#include<stdio.h>
/**
* main - prints reverse
* Return: prints the alphabets in reverse order
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
