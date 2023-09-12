#include "main.h"

/**
 * print_sign -checks
 * @n : Be allowed
 * Return: 1,0 and -1
 */

int print_sign(int n)
{
	if  (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}

