#include <stdarg.h>

/**
 * sum_them_all - Sum all its parameters.
 * @n: The number of parameters to sum.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);

	int sum = 0;

	for (unsigned int i = 0; i < n; i++)
	{
		int num = va_arg(args, int);

		sum += num;
	}
	va_end(args);
	return (sum);
}
