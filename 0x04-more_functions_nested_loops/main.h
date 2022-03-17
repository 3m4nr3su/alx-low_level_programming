#ifndef _MAIN_H_
#define _MAIN_H_

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1 . On error, -1 .
 */

int _putchar(char c);

/**
 * _isupper - checks for uppercase alphabetic character
 * @c: letter
 *
 * Return: result
 */

int _isupper(int c);

/**
 * _isupper - checks for a digit (0 through 9)
 * @c: gigitty
 *
 * Return: result
 */

int _isdigit(int c);

/**
 * _isdigit - multiplies two integers
 * @a: num1
 * @b: num2
 *
 * Return: product
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

/**
 *more_numbers - draws a straight line in the terminal
 * @n: underscore
 */

void print_line(int n);

/**
 *print_diagonal - draws a straight line in the terminal
 * @n: spaces
 */

void print_diagonal(int n);

/**
 * print_square - prints a square of #'s
 * @size: dimensions
 */

void print_square(int size);

/**
 * print_triangle - print traingle of #'s
 * @size: dimensions
 */

void print_triangle(int size);

#endif
