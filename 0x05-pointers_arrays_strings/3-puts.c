#include "main.h"

/**
 * _puts - prints a string followed by a newline to stdout
 *
 * @str: string to count
 *
 * Return: return string length
 */
void _puts(char *str)
{
	char i = 0;

	for (; str[i] != '\0'; i++)
		_putchar(str[i]);

}
