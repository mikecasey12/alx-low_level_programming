#include "holberton.h"
/**
 * jack_bauer - a function that prints the absolute of numbers
 * Return: return success
 */
void jack_bauer(void)
{
	for (int t1 = 48; t1 < 51; t1++)
	{
		for (int t2 = 48; t2 <= 57; t2++)
		{
			for (int t3 = 48; t3 <= 53; t3++)
			{
				for (int t4 = 48; t4 < 58; t4++)
				{
					if (!(t1 == 50 && t2 == 51 && t3 == 53 && t4 == 57))
					{
						_putchar(t1);
						_putchar(t2);
						_putchar(':');
						_putchar(t3);
						_putchar(t4);
						_putchar('\n');
					} else
					{
						_putchar(50);
						_putchar(51);
						_putchar(':');
						_putchar(53);
						_putchar(57);
						_putchar('\n');
						pause();
					}
				}
			}
		}
	}
}
