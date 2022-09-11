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
		if (x != 0x39)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
