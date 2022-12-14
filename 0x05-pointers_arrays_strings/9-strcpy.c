#include "main.h"
/**
 * *_strcpy - a function that copies the string pointed to by src
 * @dest: the given buffer
 * @src: the string output
 *
 * Return:  the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (src[i] != '\0')
	{
		i++;
	}

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
