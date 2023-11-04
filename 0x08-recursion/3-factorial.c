#include <stdio.h>
/**
 * factorial - This function calculates the factorial of a number
 * @n: The integer
 * Return: The factorial of n
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
	return (-1);
	}
	else if (n <= 1)
	{
	return (1);
	}
	else
	{
	fact = n * factorial(n - 1);
	return (fact);
	}
}

