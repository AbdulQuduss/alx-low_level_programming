#include <stdio.h>
/**
 * main- this program prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument array
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
