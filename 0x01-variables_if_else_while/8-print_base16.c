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
	int x = 0;

	for (x = 0x30; x <= 0x39; x++)
	{
		putchar(x);
	}

	for (x = 0x61; x <= 0x66; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
