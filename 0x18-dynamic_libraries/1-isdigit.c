#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: character to check
 * Return: 1 if digit from 0 - 9, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
