#include "main.h"
#include <stdio.h>
/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 *
 * Return: pointers to the allocated memory
 * if malloc fails, status value equal to 98
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
