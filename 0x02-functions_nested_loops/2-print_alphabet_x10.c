#include "main.h"

/**
 * print_alphabet_x10  - check
 *
 * Return: 0
 */


void print_alphabet_x10(void)
{
	int number;
	char c;

	number = 0;

	while (number < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		number++;
	}
}
