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

/**
 * print_rev - prints a string in reverse
 */

void print_rev(char *s);

/**
 * rev_string - reverses a string
 */

void rev_string(char *s);

/**
 * puts2 - prints every other char of a string starting with the 1st. Ends with \n
 */

void puts2(char *str);

/**
 * puts_half - prints half of a string. If numof chars is odd, print 2nd half & \n
 */

void puts_half(char *str);

/**
 * print_array -  prints n elements of an array of ints & a \n
 */

void print_array(int *a, int n);

/**
 * _strcpy - copies string pointed to by src(including \0) to buffer pointed by dest
 */

char *_strcpy(char *dest, char *src);

#endif
