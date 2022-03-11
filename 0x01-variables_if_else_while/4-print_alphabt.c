#include <stdio.h>

/**
 * main - print a-z except q & e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e')
		{
			alpha++;
		}
		else if (alpha == 'q')
		{
			alpha++;
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');
	return (0);
}
