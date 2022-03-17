#include "main.h"

/**
 * print_diagonal - prints a diagonal \ of lenght n then \n
 * @n: diagonal length
 *
 * Return: diagonal
 */

void print_diagonal(int n)
{
	int line;
	int space;

	if (n > 0)
	{
		for (line = 1; line <= n; line++)
		{
			for (space = 1; space < line; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
