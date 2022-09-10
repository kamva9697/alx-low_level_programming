#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the last digit
 * Return: zero (Success)
 */
int main(void)
{
	int n, string_length, last_digit;
	char str_n[10];

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* convert digit to string */
	sprintf(str_n, "%d", n);

	/* get the string length of str_n */
	string_length = strlen(str_n);

	/* convert the last digit to int and store to 'last_digit' */
	last_digit = atoi(&str_n[string_length - 1]);

	if (n < 0)
		last_digit *= -1;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_digit);
	} else if (last_digit ==  0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else if (last_digit < 6 && last_digit != 0)
	{
		printf("Last digit of %d is %d ", n, last_digit);
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
