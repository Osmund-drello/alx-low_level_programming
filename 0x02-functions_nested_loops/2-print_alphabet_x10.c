#include "main.h"

/**
 * print_alphabets_x10 - Make alphabets x10 times
 * Return: void
 */

void print_alphabets_x10(void)
{
	char ch;
	int i;

	for (ch = 1; ch <= 10; i++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
