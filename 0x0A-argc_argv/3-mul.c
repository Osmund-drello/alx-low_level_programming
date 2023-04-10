#include "main.h"
#include <stdio.h>

/**
 * main - prints multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */

int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	y = _atoi(argv[2]);
	printf("%d\n", x * y);

	return (0);
}
