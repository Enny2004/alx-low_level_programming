#include "main.h"
/**
 * _atoi - a function that convert a string to an integer
 * @s: take as input
 *
 * Return: int as output
 */
int _atoi(char *s)
{
	int i, j, k, l;

	i = k = 0;
	l = 1;
	while ((s[i] < '0' || s[i] > '9') && (s[i] != '\0'))
	{
		if (s[i] == '-')
			l *= -1;
		i++;
	}
	j = i;
	while ((s[j] >= '0') && (s[j] <= '9'))
	{
		k = (k * 10) + 1 * ((s[j]) - '0');
		j++;
	}
	return (k);
}
