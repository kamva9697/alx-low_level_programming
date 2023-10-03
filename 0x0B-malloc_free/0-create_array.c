#include "main.h"

/**
* create_array - a function that creates an array of chars,
*								 and initializes it with a specific char
*
* @size: number of chars
* @c: initialzation characters
*
* Return: returns a pointer to the array, NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	buffer = (char *) malloc(size);
	if (buffer == NULL) return NULL;

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}
	return (buffer);
}
