#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number to check
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last = n % 10;
	
	if (n < 0)
		last *= -1;

	_putchar('0' + last);

	return (last);
}
