#include <stdio.h>
/**
 * is_prime_recursive - This function checks if a number is a prime number
 * @num: number
 * @divisor: the divisor
 * Return: integer
 */
int is_prime_recursive(int num, int divisor)
{
	if (num <= 1)
	{
	return (0);
	}
	else if (divisor == 1)
	{
	return (1);
	}
	else
	{
	if (num % divisor == 0)
	{
	return (0);
	}
	else
	{
	return (is_prime_recursive(num, divisor - 1));
	}
	}
}

/**
 * is_prime_number - This function determines a prime number
 * @n: the number
 * Return: 1 or 0
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, n - 1));
}
