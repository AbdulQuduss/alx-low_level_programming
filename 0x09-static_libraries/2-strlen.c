/**
 * _strlen - This function returns the length of a string
 * @s: input string
 * Return: length of string
 */
int _strlen(char *s)
{
	int m;

	m = 0;

	while (*s != '\0')
	{
	m++;
	s++;
	}

	return (m);
}
