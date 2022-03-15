#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */

void times_table(void)
{
	int r;
	int c;
	int prod;

	for (r = 0; r <= 9; r++)
	{
		for (c = 0; c <= 9; c++)
		{
			prod = (r * c);

			if (c == 0)
			{
				_putchar('0' + prod);
			}
			else if (prod <= 9)
			{
				_putchar (',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + prod);
			}
			else if (prod > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
		}
		_putchar('\n');
	}
}
