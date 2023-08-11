#include "stdio.h"

/*
* main - prints all arguments
*
* @argc: number of arguments
* @argv: array of strings
*
* Return: int
*/
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
	}
}
