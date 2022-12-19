#include "main.h"

/**
 * swap_int - swaps the values of integers
 * @a: first integer input
 * @b: second integer input
 * Return: integers
*/

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
