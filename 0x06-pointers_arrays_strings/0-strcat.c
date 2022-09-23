#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: destintion string pointer
 * @src: source string pointer
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (dest[dest_len] != '\0')
		dest_len++;


	for (i = 0; i < dest_len && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';

	return (dest);
}
