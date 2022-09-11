#include<stdio.h>
/**
 * main-entry point for the program
 *
 * Return: 0 if it fails
 */
int main(void)
{
	printf("size of a char: %1d byte(s)\n", sizeof(char));
	printf("size of an int: %1d byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
