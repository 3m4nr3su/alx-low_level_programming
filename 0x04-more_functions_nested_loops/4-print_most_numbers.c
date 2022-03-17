#include "main.h"

/**
 * print_most_numbers - prints 0-9 but not 2 & 4
 * @n: the number
 */

void print_most_numbers(void)
{
	int n;

	n = '0';

	while (n <= '9')
	{
		if (n == '2' || n == '4')
			n++;
		else
		{
			_putchar(n);
			n++;
		}
	}
	_putchar('\n');
}
