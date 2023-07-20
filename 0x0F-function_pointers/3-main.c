#include "3-calc.h"

/**
 * main - Prints the result of simple operations.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0, num = 0;
	char op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2][0];

	if (argv[2][1] != '\0' || (op != '+' && op != '-' &&
		op != '/' && op != '*' && op != '%'))
	{
		printf("Error\n");
		exit(99);
	}

	if ((op == '/' || op == '%') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	num = (get_op_func(argv[2]))(n1, n2);
	printf("%d\n", num);
	return (0);
}
