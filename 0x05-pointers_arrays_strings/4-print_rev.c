#include "main.h"
/**
 * print_rev - print a string in reverse
 * @s: take as input
 */
void print_rev(char *s)
{
	int i, j, max;


	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	max = i;

	for (j = max; j > 0; j--)
	{
		s--;
		_putchar(*s);
	}

	_putchar('\n');
}
