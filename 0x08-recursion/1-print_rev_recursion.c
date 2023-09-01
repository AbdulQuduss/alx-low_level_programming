#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - This function prints a string in reverse
 * @s: string to be printed
 * Return: void always
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
