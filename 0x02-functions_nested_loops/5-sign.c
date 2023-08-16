#include <stdio.h>
#include "main.h"
/**
 * print_sign - This function determines the sign of a character
 * @n: The input character
 * Return: (+) if character is positive, (0) if character is zero and
 * (-) if character is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
	}
	else if (n == 0)
	{
	_putchar(0);
	return (0);
	}
	else
	{
	_putchar('-');
	return ('-');
	}
}
