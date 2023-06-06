#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 *
 * @s: buffer
 * @b: the constant byte
 * @n: the first number of bytes to fill
 *
 * Return: pointer to the buffer
 */
char *_memset(char *s, char b, unsigned int n) {
  unsigned int i;

  for (i = 0; i < n; i++) {
    s[i] = b;
  }

  return (s);
}
