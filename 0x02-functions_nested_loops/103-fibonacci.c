#include <stdio.h>
/**
 * main-print all fibonacci numbers below 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	long int total_sum, sum, first, second;

	total sum = 0;
	sum = 0;
	first = 0;
	second = 1;

	whilw (sum < 4000000)
	{
		sum = first + second;
		if (sum % 2 == 0)
	{
		total_sum += sum;
	}
	first = second;
	second = sum;
	}

	printf("%li\n", total_sum);

	return (0);
}
