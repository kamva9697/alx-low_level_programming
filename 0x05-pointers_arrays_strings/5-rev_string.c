#include "main.h"

/**
 * rev_string - print a string in reverse
 *
 * @s: string to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int sz;
	int i;
	int j;

	sz = 0;
	while (s[sz] != '\0')
		sz++;

	j = sz - 1;
	for (i = 0; i < j;)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
	}
}

