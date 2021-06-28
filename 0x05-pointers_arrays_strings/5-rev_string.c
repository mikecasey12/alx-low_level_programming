#include <stdio.h>
#include "holberton.h"

/**
 * rev_string - a function that reverses a string
 * recount counts to the end
 * @s: string input
 * Return: returns a reversed string input
 */

void rev_string(char *s)
{
	char rev = s[0];
	int fcounter = 0;
	int i;

	while (s[fcounter] != '\0')
		fcounter++;

	for (i = 0; i < fcounter; i++)
	{
		fcounter--;
		rev = s[i];
		s[i] = s[fcounter];
		s[fcounter] = rev;
	}
}
