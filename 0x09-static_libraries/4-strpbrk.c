#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

char *_strpbrk(char *s, char *accept)
{
	int drello;

	while (*s)
	{
		for (drello = 0; accept[drello]; drello++)
		{
			if (*s == accept[drello])
				return (s);
		}
		s++;
	}
	return ('\0');
}

