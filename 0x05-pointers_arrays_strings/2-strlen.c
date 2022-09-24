#include "main.h"

/**
 * _strlen - count the number of characters in string
 *
 * @str: string to count
 *
 * Return: return string length
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}
