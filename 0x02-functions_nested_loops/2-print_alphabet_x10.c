#include "main.h"
/**
 * print_alphabet_x10 - This function prints 1lphabets 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
	char lowercase = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
	_putchar(lowercase);
	lowercase++;
	}

	_putchar('\n');

	}
}
