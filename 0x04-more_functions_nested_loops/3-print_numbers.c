#include "main.h"

/**
 * print_numbers - prints 0-9
 * @n: numbers
 */

void print_numbers(void)
{ 
	int n;

	n = '0';

	while (n <= '9')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
