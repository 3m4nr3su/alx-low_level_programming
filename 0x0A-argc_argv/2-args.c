#include <stdio.h>
#include "main.h"

/**
 * main - print each argument passed to program in a new line
 * @argc: argument counter
 * @argv: argument value
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);

	return (0);
}
