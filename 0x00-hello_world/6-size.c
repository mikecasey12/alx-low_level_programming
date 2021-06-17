#!/bin/bash
/**
 * main: display size of different types on systems
 */
int main(void)
{
	int i;
	long int li;
	long long int lli;
	double d;
	char c;

	printf("Size of a char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu.\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %lu.\n", (unsigned long)sizeof(f));
	return(0);
}
