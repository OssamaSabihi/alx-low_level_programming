#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 *
 * @argc: the number of command-line arguments passed
 * to the program when it is executed
 *
 * @argv: an array of strings that holds the actual
 * command-line arguments
 *
 * Return: Always 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	printf("\n");

	return (0);
}
