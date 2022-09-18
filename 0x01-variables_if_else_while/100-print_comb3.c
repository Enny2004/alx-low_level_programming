#include <stdio.h>
/**
 * main-print all possible wo digit
 *
 * Return:Always (sucessful)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (K > j && j > i)
				{
					putchar(i % 10 + '0');
					Putchar(j % 10 + '0');
					putchar(k % 10 + '0');
					if (i != 7 || j != 8)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
