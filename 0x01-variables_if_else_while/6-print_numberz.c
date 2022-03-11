#include <stdio.h>

/**
 * main - nos 0-9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int no = '0';

	while (no <= '9')
	{
		putchar(no);
		no++;
	}
	putchar('\n');
	return (0);
}
