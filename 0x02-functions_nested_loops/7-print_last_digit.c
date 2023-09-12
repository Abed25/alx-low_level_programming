#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - i print the last digit of a number
 * @n: accept n as a variable
 * Return: a last digit of a number
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
	return (_abs(n % 10));
}
