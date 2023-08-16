#include <stdio.h>

int _putchar(char c)
{
	return (c);
}

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
