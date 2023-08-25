/**
 * _strncpy - This function copies n byte
 * @dest: destination string
 * @src: source string
 * @n: byte
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int 1;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[i] = src[i];
	while (i < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
