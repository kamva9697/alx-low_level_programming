#include "main.h"

/**
 * print_number - prints an integer 
 *
 * @n: integer to be printed
 *
 * Return: nothing
 */

void print_number(int n)
{
	int digit;

	while(n != 0)
	{
		digit = n % 10;

		_putchar(digit);

		digit /= 10;
	}
}
