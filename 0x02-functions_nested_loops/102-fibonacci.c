#include<stdio.h>
/**
 * main - a function that prints the fibonacci numbers
 * Return: returns 0 on success
 */
int main(void)
{
	int i, n = 50, t1 = 1, t2 = 1;
	int next = t1 + t2;

	printf("%d, \n%d, \n", t1, t2);

	for (i = 1; i <= n; ++i)
	{
		printf("%d, \n", next);
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}
	return (0);
}
