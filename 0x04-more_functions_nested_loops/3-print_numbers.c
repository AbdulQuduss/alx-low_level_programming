#include <stdio.h>
/**
 * print_numbers - This function prints numbeers
 * Return: void
 */
void print_numbers(void)
{
	char digit = '0';

	while (digit <= '9')
	{
	putchar(digit);
	digit++;
	}
	putchar('\n');
}
