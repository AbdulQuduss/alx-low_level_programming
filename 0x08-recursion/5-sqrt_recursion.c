#include <stdio.h>
/**
 * _sqrt_recursive - This function finds the natural sqyare of a digit
 * _sqrt_recursion - This function returns the natural square of a digit
 * @n: the digit
 * @guess: guess
 * Return: the natural square
 */
int _sqrt_recursive(int n, int guess)
{
	if (guess * guess <= n && (guess + 1) * (guess + 1) > n)
	{
	return (guess);
	}
	else
	{
		return (_sqrt_recursive(n, guess + 1));
	}
}
/**
 * _sqrt_recursion - This function returns the natural square of a digit
 * @n: the digit
 * Return: the natural square
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	else if (n == 0 || n == 1)
	{
	return (n);
	}
	else
	{
	return (_sqrt_recursive(n, 1));
	}
}
