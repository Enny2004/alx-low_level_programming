#include <stdio.h>
/**
 * main-print lowercase alphabet in reverse
 *
 * Return:Always (successful)
 */
int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
