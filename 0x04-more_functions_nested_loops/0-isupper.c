#include "main.h"
/**
 * _isupper-check uppercase character
 * @n: function takes c as input
 *
 * Return: 1 if uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}

	return(0);
}
