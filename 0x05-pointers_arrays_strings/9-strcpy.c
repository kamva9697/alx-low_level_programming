#include "main.h"

/**
* _strcpy - a function that copies the string pointed to by src,
*          including the terminating null byte (\0),
*          to the buffer pointed to by dest
*
* @src: source string to copy from
* @dest: destination buffer to copy to
*
* Return: pointer to @dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';

	return (dest);
}

