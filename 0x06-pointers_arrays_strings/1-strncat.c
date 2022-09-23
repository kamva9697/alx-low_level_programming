#include "main.h"

/**
 * _strncat - concatenates two strings using atmost n bytes
 *
 * @dest: destintion string pointer
 * @src: source string pointer
 * @n: bytes to concat from src
 *
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;


	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];

	dest[dest_len + i] = '\0';

	return (dest);
}
