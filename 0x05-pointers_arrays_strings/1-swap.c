/**
 * swap_int - This function swaps the value of two integers
 * @a: int to swap
 * @b: int to swap
 * return: void always
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
