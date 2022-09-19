#include "main.h"
/**
 * _puts - prints a string followed by a new line
 *str: take as an argument
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
