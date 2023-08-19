#include <stdio.h>
/**
 * more_numbers - This function prints mre numbers
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
		{
		putchar('1');
		}
		{
		putchar(j + '0');
		}
	putchar('\n');
	}
}
