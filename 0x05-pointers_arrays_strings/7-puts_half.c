#include "main.h"
/**
 * puts_half - prints half a string
 * @str: take as input
 */
void puts_half(char *str);
{
	int length, half, i;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	half = legth / 2;

	i = 0;

	if (length % 2 == 1)
	{
		half += 1;
	}

	for (i = half; i < length; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
