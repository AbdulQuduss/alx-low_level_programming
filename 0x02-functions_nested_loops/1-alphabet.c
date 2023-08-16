#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - This function prints lowercase
 */
void print_alphabet(void)
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
