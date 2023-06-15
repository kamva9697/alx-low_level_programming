#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
*
* @a: pointer to array of integers
*
* @n: number of integers to prints
*
* Return: Nothing
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%i", *(a + i));
		else
			printf("%i, ", *(a + i));
	}
	printf("\n");
}
