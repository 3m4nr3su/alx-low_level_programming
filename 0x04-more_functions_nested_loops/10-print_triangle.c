#include "main.h"

/**
 * print_triangle - print traingle with #'s
 * @size: dimensions of triangle to draw
 */

void print_triangle(int size)
{
	int h;
	int b;
	int draw;

	if (size <= 0)
		_putchar('\n');

	for (h = 1; h <= size; h++)
	{
		for (b = 1; b <= (size - h); b++)
			_putchar(' ');

		for (draw = 1; draw <= h; draw++)
			_putchar('#');

		_putchar('\n');
	}
}
