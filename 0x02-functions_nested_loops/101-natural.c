#include <stdio.h>
/**
 * main - This program prints the sum of multiples of 3 and 5 less than 1024
 * Return: always 0
 */
int main(void)
{
	int i, n;

	n =  0;
	for (i = 1; i < 1024; i++)
	{
	if (i % 3 == 0 || i % 5 == 0)
	{
	n = n + i;
	}
	}
	printf("%d\n", n);
	return (0);
}
