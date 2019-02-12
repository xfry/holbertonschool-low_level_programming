/**
 * _abs - print a positive value of a number
 * @n: an integer value
 *
 * Description: a function to becomes negative values to
 * positive values
 * Return: int value
 */
int _abs(int n)
{
	int aux;

	aux = n < 0 ? ((-1)*(n)) : n;
	return (aux);
}
