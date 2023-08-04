#include "main.h"

/**
* factorial - recursively generate a factorial
* @n: target number
*
* Return: 0, -1 , factorial
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
