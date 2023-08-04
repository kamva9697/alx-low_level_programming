#include "main.h"

/**
* _strlen_recursion - returns length of string
*
* @s: object string
*
* Return: length of string
*/

int _strlen_recursion(char *s)
{
	int len;

	len = 0;

	if (*s == '\0')
	{
		return (0);
	}

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
		return (len);
	}

	return (0);
}


