#include <stdio.h>

/**
 * main - prints the lower case alphabets
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	return (0);
}
