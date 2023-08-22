/**
 * _puts - This function prints a string on the screen
 * @str: input string
 * Return: void always
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
	putchar(*str);
	*str++
	}
	putchar('\n');
}
