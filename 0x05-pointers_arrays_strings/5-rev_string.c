#include "main.h"
/**
 * rev_string - reverses a string
 * @s: take as input
 */
void rev_string(char *s)
{
	int i, j, middle, length;

	char temp;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	length = i;
	middle = i / 2;

	for (j = 0; j < middle; j++)
	{
		temp = s[j];
		s[j] = s[length - j - 1];
		s[length - j -1] = temp;
	}
}
