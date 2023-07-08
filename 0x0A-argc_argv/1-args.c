#include <stdio.h>

/**
 * main - print the number of arguments passed to the program
 *
 * @argc: the number of command-line arguments passed
 * to the program when it is executed
 *
 * @argv: an array of strings that holds the actual
 * command-line arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
