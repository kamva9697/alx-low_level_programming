#include "main.h"

/**
* puts_half - prints half of a string and a newline
*
* @str: The string to print
*
* Returns: nothing
*/
void puts_half(char *str)
{
	int strlen = 0;
	int n;
	int i;

	while (str[strlen] != '\0')
		strlen++;

	if (strlen % 3 == 0)
		n = (strlen - 1) / 2;
	else
		n = strlen / 2;

	n++;
	for (i = n; i < strlen; i++)
		_putchar(str[i]);

	_putchar('\n');
}

