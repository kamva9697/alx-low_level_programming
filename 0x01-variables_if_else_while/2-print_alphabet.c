#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints all alphabets
 * Return: zero (Success)
 */
int main(void)
{
	char c = ' ';

	for (c = 'a'; c != 0x7B ; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
