#include <stdio.h>
/**
 * main - This program prints lowercase alphabets
 * Return: always 0 (success)
 */
int main(void)
{
	char lowercase = 'a';
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(lowercase + i);
	}
	putchar('\n');
	return (0);
}
