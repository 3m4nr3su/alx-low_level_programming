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
 * takes a pointer to an int & updates the value it points to to 98
 */

void reset_to_98(int *n);

/**
 * swap_int - swaps values of a & b
 */

void swap_int(int *a, int *b);

/**
 * _strlen - returns length of string
 */

int _strlen(char *s);

/**
 * _puts - prints a string & \n
 */

void _puts(char *str);

#endif
