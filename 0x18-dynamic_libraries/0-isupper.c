#include "main.h"

/**
 * _isupper - checks if uppercase
 * @c: the letter
 * Return: 1 if uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
