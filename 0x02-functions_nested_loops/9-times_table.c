#include <stdio.h>
/**
 * times_table - This function prints 9 times table
 * Return: void
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = j * i;
			printf("%d", result);
			if (j < 9)
			{
			printf(",  ");
			}
		}
	printf("\n");
	}
}
