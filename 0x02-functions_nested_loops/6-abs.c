#include "main.h"

/**
 * _abs-return absolute vaiue of a number
 * @n: parameter
 * Return: absolute value of a number
 */
int _abs(int n)
{
	if (n < 0)
	n = -n;
	return (n);
}