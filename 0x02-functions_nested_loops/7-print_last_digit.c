#include "main.h"

/**
 *print_last_digit - function that prints last digit
 *
 *@i: input number as an integer
 *
 * Return: last digit
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (k < 0)
	{
		_putchar(-k + 48);
		return (-k);
	}
	else
	{
		_putchar(k + 48);
		return (k);
	}
}
