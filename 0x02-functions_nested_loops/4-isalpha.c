/**
 * _isalpha - This function checks if @c is an alphabet
 * @c: input character
 * Return: 1 if successful but 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
