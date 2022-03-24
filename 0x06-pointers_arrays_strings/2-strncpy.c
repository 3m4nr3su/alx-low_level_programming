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
 * _strncpy - should work exactly like strncpy
 * @dest: ination
 * @src: source
 * n: bytes?
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src [i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
