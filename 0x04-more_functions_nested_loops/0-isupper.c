#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: i will be using c variable
 * Return: 1 when entry is uppercase, else 0 when lowercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
