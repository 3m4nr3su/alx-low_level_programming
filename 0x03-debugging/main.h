#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>

/**
 *positive_or_negative - checks if +/-
 * @i: the int to test
 * Return: on success 0
 */

int positive_or_negative(int i);

/**
 * largest_number - prints largest no. out of 3
 * @a: a no.
 * @b: a no.
 * @c: a no.
 * Return: on success 0
 */

int largest_number(int a, int b, int c);

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day);

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year);

#endif

