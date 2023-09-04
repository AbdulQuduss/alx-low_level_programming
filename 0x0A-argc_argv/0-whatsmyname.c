#include <stdio.h>
/**
 * nargs- prints the name of the program
 * @argc: argument count
 * @argv: argument array
 * Return: always 0
 */
int nargs(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
