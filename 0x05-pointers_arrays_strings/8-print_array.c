#include <stdio.h>
#include "holberton.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 * @n: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int n)
{
	if (n > 0)
	{
		while (i < n)
		{
			if (i != n - 1)
			{
				printf("%d", *(a + i));
				printf(", ");
			} else
			{
				printf("%d\n", *(a + i));
			}
			i++;
		}
	} else
	{
		printf("\n");
	}
}
