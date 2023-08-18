#include <stdio.h>
/**
 * print_most_numbers - The function prints some numbers
 * Return: void
 */
void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (n != '2' && n != '4')
		{
		putchar(n);
		}
	n++;
	}
	putchar('\n');
}
