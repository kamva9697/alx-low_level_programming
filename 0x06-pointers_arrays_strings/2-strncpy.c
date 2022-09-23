#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: destintion string pointer
 * @src: source string pointer
 * @n: bytes to concat from src
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	/* It is assumed that @dest has enough space */
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
