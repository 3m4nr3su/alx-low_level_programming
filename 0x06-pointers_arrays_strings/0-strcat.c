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
 * _strcat - concatenates two strings
 * removes \0 in dest & copies src to dest
 * @dest: destination
 * @src: source
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int l;

	l = _strlen(dest);

	for (i = 0; i <= _strlen(src); i++)
		dest[(i + l)] = src[i];

	return (dest);
}
