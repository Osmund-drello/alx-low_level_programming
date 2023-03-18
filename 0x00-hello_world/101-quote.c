#include <stdio.h>
#include <unistd.h>

/**
 * main - Prints a line to the standar error
 * Return: reutrn 1 when successful
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
