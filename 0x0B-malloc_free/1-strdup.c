#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

char *_strcpy(char *dst, char *src);

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dst = malloc(sizeof(char));

	if (str == NULL)
		return (NULL);
	_strcpy(dst, str);
	return (dst);
}
/**
 * *_strcpy - function that copies string from source to destination
 * @dst: pointer destination string
 * @src: pointer to source string
 * Return: returns string
 */

char *_strcpy(char *dst, char *src)
{
	char *str = dst;

	while (*src != '\0')
	{
		*str++ = *src++;
	}
	str = '\0';
	return (str);
}
