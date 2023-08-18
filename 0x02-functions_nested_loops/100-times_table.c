#include <stdio.h>
/**
 * print_times_table - This function prints n times table
 * @n: Thi is the number of prints
 * Return: void
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n > 15 || n < 0)
	{
	printf("\n");
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
		result = j * i;
		printf("%d", result);

		if (j < n)
		{
		printf(",  ");
		}
		}
		printf("\n");
	}
}
