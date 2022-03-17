#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */

int _putchar(char c);

/**
 * checks for uppercase alphabetic character
 */

int _isupper(int c);

/**
 * checks for a digit (0 through 9)
 */

int _isdigit(int c);

/**
 * multiplies two integers
 */

int mul(int a, int b);

/**
 * prints 0-9
 */

void print_numbers(void);

/**
 * prints 0-9 except 2 & 4
 */

void print_most_numbers(void);

/**
 * prints 1-14 10 times, each in anew line
 */

void more_numbers(void);

#endif
