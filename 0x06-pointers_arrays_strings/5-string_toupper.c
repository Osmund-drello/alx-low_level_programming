#include "main.h"

/**
 *string_toupper - function that changes all lower case letters to uppercase
 *@x: pointer to string
 *
 * Return: pointer to uppercase string.
 */

char *string_toupper(char *x)
{
	int l;

	l = 0;

	while (x[l] != '\0')
	{
		if (x[l] >= 97 && x[l] <= 122)
		{
			x[l] = x[l] - 32;
		}
		l++;
	}
	return (x);
}
