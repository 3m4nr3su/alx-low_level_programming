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
 * _strncat - concatenates two strings
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n/more bytes
 * @dest: ination
 * @src: source
 * @n: bytes?
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l;
	int i;

	l = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[(l + i)] = src[i];
	dest[(l + i)] = '\0';

	return (dest);
}
