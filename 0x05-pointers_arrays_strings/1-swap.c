#include "main.h"

/**
 * reset_to_98 - resets a pointer to an int to 98
 *
 * @ptr: pointer to int
 *
 */
void swap_int(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}
