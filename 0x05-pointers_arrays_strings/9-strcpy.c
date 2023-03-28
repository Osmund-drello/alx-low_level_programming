#include "main.h"

/**
 * *_strcpy - coppies the strin pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to by the pointer `src` to
 * the buffer pointed to by `dest`
 * Return: pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int z = -1;

	do {
		z++;
		dest[z] = src[z];
	} while (src[z] != '\0');
	return (dest);
}
