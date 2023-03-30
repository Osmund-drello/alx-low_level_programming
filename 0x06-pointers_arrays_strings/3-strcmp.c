#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: compare_value
 */

int _strcmp(char *s1, char *s2)
{
	int c, compare_value;

	c = 0;
	while (s1[c] == s2[c] && s1[c] != '\0')
	{
		c++;
	}

	compare_value = s1[c] - s2[c];
	return (compare_value);
}
