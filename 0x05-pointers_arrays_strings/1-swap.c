#include "main.h"

/**
 * swap_int - resets a pointer to an int to 98
 * @a: pointer to int
 * @b: pointer to int
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
