#include "main.h"

/**
* _strpbrk - Write a function that searches a string for any of a set of bytes.
*
* @accept: The needle
* @s: The haystack
*
* Returns: A pointer to the byte in s that matches the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == s[i])
			{
				return (*s);
			}
		}
		s++;
	}
}
