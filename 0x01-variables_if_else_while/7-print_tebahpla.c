#include <stdio.h>
/**
 * main-print lowercase alphabet in reverse
 *
 * Return:Always (successful)
 */
int main(void)
{
	int n;

	for (n = 'z'; n <= 'a'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
