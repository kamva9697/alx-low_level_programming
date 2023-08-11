#include "stdio.h"
#include "stdlib.h"

/**
* main - adds positive numbers
*
* @argc: argument count
* @argv: array of arguments
*
* Return: int
*/
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc < 1)
	{
		printf("0\n");
	}

	i = 0;
	sum = 0;
	while (i < argc)
	{
		if (atoi(argv[i]) < 0x48 || atoi(argv[i]) > 0x57)
		{
			fprintf(stderr, "Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}
}
