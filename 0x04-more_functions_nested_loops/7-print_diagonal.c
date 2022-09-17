#include "main."
/**
 * print_diagonal - draw a diagonal line
 *@n: number of line should be printed
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar('\\');
		}

		if (i != n - 1)
		{
			_putchar('\n');

			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
		}
	}

	_putchar('\n');
}
