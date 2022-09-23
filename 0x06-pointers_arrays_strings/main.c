#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: destintion string pointer
 * @src: source string pointer
 *
 * Return: pointer to destination string
 */
char *_strcat(char *s1, char *src)
{
	int dest_len = 0;
	int i = 0;

	while (s1[dest_len] != '\0')
		dest_len++;


	for (i = 0; i < dest_len && src[i] != '\0'; i++)
	{
		s1[dest_len + i] = src[i];
	}
	s1[dest_len + i] = '\0';

	return (dest);
}

/**
 * main - contatinate two strings
 *
 * Return: Always 0.
 */
int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s\n", s2);
	ptr = _strcat(s1, s2);
	printf("%s\n", s1);
	printf("%s\n", s2);
	printf("%s\n", ptr);
	return (0);
}
