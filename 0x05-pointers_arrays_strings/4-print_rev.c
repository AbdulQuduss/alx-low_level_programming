/**
 * print_rev - This function prints a string in reverse
 * @s: inout string
 * return: always void
 */
void print_rev(char *s)
{
	int m = 0;
	int o;

	while (*s != '\0')
	{
	m++;
	s++;
	}
	s--;

	for (o = m; o > 0; o--)
	{
	putchar(*s);
	s--;
	}
	putchar('\n')
}
