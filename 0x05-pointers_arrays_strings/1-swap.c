#include "main.h"

/**
 * swap_int - swaps the valueas of a & b
 * @a: num1
 * @b: num2
 */

void swap_int(int *a, int *b)
{
	int num1 = *a;
	*a = *b;
	*b = num1;
}
