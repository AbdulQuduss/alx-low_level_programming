#include <stdio.h>
/**
 * print_line - This function prints a line
 * @n: number of times to print _
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
	for (i = 0; i < n; i++)
	{
	putchar('_');
	}
	putchar('\n');
	}

}
