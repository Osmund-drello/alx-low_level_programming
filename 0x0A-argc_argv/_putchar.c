#include <stdio.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 *Return: on success 1
 *on erro, -1 is returned and error is set appropriately
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
