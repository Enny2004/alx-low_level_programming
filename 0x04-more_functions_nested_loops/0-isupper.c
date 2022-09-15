#include "main.h"
/**
 * _isupper-check uppercase character
 * @n: function takes c as input
 *
 * Return: 1 if uppercase
 * Return 0 if not uppercase
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}

	return(0);
}
