#include "main.h"

/**
 * _strcpy - copies string pointed to by src(including \0)
 * to buffer pointed by dest
 * @dest: destination
 * @src: source
 * Return: copy of original source
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= 69; i++)
		dest[i] = src[i];

	return (dest);
}
