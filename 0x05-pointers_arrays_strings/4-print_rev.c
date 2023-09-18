#include <stdio.h>
#include "main.h"

/**
 * print_rev - reversing
 * @s: being used
 * Returns: nothing
 */
void print_rev(char *s)
{
	int len, k;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (k = len; k > 0; k--)
	{
		putchar(*s);
		s--;
	}
	putchar('\n');
}
