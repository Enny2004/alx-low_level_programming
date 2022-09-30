#include <stdio.h>
/**
 * main - prints the number of argument passed into it
 * @argc: number of command line arguments
 * @argv: arraythat contains the program command line argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
