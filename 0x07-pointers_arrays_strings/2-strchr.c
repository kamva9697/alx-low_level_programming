#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 *
 * @s: string to search in (haystack)
 * @c: character to find (needle)
 *
 * Return: Returns a pointer to the first occurrence
 *				 of the character c in the string s,
 *				 or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
		i++;
	}
		return (0);
}
