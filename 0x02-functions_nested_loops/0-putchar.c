#include <stdio.h>
/**
 * main - This program prints _putchar
 * Return: always 0 (success)
 */

int main(void)
{
	char c[] = "_putchar";

	for (int i = 0; c[i] != '\0'; i++)
	{
	putchar(c[i]);
	}

	putchar('\n');
	return (0);
}
