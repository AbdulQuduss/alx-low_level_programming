#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>

/**
 * _putchar - This function push an input to stdout
 * @c: character to be written
 * Return: On success, returns c.
 * On error, returns -1 and sets errno
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_alphabet - This function displays alphabets
 * Return: void
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

#endif
