#include "main.h"

/**
 * main-checks for digit
 * @c: c is an input
 *
 * Return: 1 if c is a digit 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >47 && c < 58)
	{
		return (1);
	}

	return (0);
}
