#include "main.h"

/**
 * print_line - prints a line of length n (if n > 0) & \n
 * @n: line length
 *
 * Return: line
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	else if (n > 0)
	{
		int i = 0;

		while (i < n)
		{
			_putchar('_');
			i++;
		}

		_putchar('\n');
	}
}
