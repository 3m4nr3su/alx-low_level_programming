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
 * _strcat - concatenates two strings
 */

char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n/more bytes
 */

char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - function should work exactly like strncpy
 */

char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - should work exactly like strcmp
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array of integers
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - capitalises string
 */

char *string_toupper(char *s);

#endif
