#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: Always 0
 */

void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c + '0');
	}
	_putchar('\n');
}
