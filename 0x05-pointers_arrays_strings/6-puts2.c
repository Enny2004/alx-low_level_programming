#include "main.h"
/**
 * puts2 - print every other character of a string
 * @str: takes as input
 */
void puts2(char *str)
{
	int i, j;

	j = 0;
	
	while (str[j] != '\0')
	{
		j++
	}

	for (i = 0; i < j; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
