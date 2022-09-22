#include "main.h"

/**
 * _strcat - returns the length of a given string
 * @s: takes *s as input
 *
 * Return: the length of *s
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
		s++;
	}

	return (i);
}

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination.
 * @src: source.
 * Return: the pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < _strcat(dest))
	{
		i++;
	}

	while (i < _strcat(src))
	{
		dest[i] = src[j];
		j++
		i++
	}

	return (dest);
}
