#include <stdio.h>
#include "msin.h"
/**
 * print_alphabet - This function prints lowercase
 */
void print_alphabet(void)
{
	char lowercase = 'a';
	int i;

	for (i = 0; i < 26; i++) 
	{
	putchar(lowercase);
	lowercase++;
	}

	putchar('\n');
}
