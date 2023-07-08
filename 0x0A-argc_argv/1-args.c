#include <stdio.h>

/**
 * main - prints the number of arguments passed into it  followed by a new line
 *
 * @argc: the number of command-line arguments passed
 * to the program when it is executed
 *
 * @argv: an array of strings that holds the actual
 * command-line arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return(0);
}
