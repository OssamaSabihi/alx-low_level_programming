#include <stdio.h>
#include <stdlib.h>

/**
 * main -  multiplies two numbers and prints the result
 *
 * @argc:  the number of command-line arguments passed
 * to the program when it is executed
 *
 * @argv: an array of strings that holds the actual
 * command-line arguments
 *
 * Return: result if it recived tow arguments 1 otherwise
 */

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		int result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);

		return (result);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
}
