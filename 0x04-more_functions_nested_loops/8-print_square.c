#include <stdio.h>
/**
 * print_square - This function prints squares
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
		for (j = size)
		{
			putchar('#');
		}
		putchar('\n');
		}
	}
}
