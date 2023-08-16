
/**
 * print_last_digit - This function returns the last digit of a number
 * @r: The input number
 * Return: lastdigit if successful
 */

int print_last_digit(int r)
{
	int lastdigit = r % 10;

	if (lastdigit < 0)
	{
	lastdigit = -lastdigit;
	}

	return (lastdigit);
}
