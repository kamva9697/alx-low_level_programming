#include <unistd.h>

/**
 * main - print a character
 *
 * Return: Success code 1
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
