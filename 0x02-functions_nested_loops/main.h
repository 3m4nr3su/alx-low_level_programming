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
 * print lowercase alphabet
 */

void print_alphabet(void);

/**
 * print lowercase alphabet 10 times
 */

void print_alphabet_x10(void);

/**
 *  checks for lowercase character
 */

int _islower(int c);

/**
 * checks for alphabetic character
 */

int _isalpha(int c);

/**
 * prints the signofa no.
 */

int print_sign(int n);

/**
 * computes the absolute value of an integer
 */

int _abs(int);

/**
 * prints the last digit of a number
 */

int print_last_digit(int);

/**
 * prints every minute of the day
 */

void jack_bauer(void);

#endif
