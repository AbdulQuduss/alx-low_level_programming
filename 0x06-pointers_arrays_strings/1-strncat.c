#include <string.h>
/**
 * _strncat - This function concatenates n byte to dest
 * @dest: destination string
 * @src: source string
 * @n: number of byte
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destl = strlen(dest);
	int i;

	for (i = 0; i < n && *src < != '\0'; i++)
	{
	dest[len + i] = *src[i];
	src++;
	}
	dest[len + i] = '\0';
	return (dest);
}
