#include <stdio.h>

/**
 * main-prints the numbers since 0 to 9
 *
 * Retun:Always (success)
 */
int main(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}