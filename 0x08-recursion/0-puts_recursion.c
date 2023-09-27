#include "main.h"
/**
 * _puts_recursion - it puts a string
 * @s: Accept the variable
 * Returns: nothing
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
