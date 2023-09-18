#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _puts - printing screen followed by a new line
 * @str: Pointer to a character
 * Returns: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
