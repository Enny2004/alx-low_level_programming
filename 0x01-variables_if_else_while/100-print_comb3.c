#include <stdio.h>
/**
 * main-print all possible wo digit
 *
 * Return: Always (sucessful)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > i)
			{
				putchar(i % 10 + '0');
				Putchar(j % 10 + '0');

				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
