#include "main.h"
/**
 * _puts - This function prints a string on the screen
 * @str: input string
 * Return: void always
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	_putchar(*str++);
	}
	_putchar('\n');
}
