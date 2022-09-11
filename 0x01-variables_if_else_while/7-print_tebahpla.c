#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints all single digit numbers of base 10
 * Return: zero (Success)
 */
int main(void)
{
	char c = ' ';

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
