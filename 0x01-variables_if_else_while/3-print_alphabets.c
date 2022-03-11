#include <stdio.h>

/**
 * main - Print a-z in small letters & caps
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a', alphaBET = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (alphaBET <= 'Z')
	{
		putchar(alphaBET);
		alphaBET++;
	}
	putchar('\n');
	return (0);
}
