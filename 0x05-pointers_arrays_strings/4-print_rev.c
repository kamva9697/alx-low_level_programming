#include "main.h"

/**
 * print_rev - print a sentence in reverse
 *
 * @s: string to reverse
 *
 *
 * Return: void
 */
void print_rev(char *s)
{
	int sz;
	int i;

	sz = 0;
	while (s[sz] != '\0')
		sz++;

	for (i = sz; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
