#include "main.h"

/**
 * _strlen - returns string length
 * @s: string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

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

	for (i = 0; i <= _strlen(src); i++)
		dest[i] = src[i];

	return (dest);
}
