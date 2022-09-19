#include "main.h"
/**
 * int _strlen - returns the length of the string
 * @s: take as input
 *
 * Return: the length of *s
 */
int _strlen(char *s)
{
	int i;

	fot (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}
