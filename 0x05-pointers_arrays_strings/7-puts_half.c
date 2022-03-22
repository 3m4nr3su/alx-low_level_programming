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
 * puts_half - prints half a string, 2nd half if num chars is odd, & \n
 * @str: string
 */

void puts_half(char *str)
{
	int mid;
	int len = _strlen(str);

	if (len % 2 == 0)
		mid = (len / 2);
	else
		mid = (len / 2) + 1;

	while (mid < len)
	{
		_putchar(*(str + mid));
		mid++;
	}
	_putchar('\n');
}
