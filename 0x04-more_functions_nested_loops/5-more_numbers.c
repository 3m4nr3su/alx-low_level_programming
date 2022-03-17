#include "main.h"

/**
 * more_numbers - prints 0-14 10 time, each in a new line
 */

void more_numbers(void)
{
	int n;
	int i = 0;

	while (i < 10)
	{
		n = 0;

		while (n <= 14)
		{
			if (n > 9 && n < 15)
				_putchar('0' + (n / 10));

			_putchar('0' + (n % 10));
			n++;
		}
		_putchar('\n');
		i++;
	}
}
