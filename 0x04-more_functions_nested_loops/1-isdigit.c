#include "main.h"

/**
 * _isdigit - checks for a digit between 0 and 9
 * @c: accept a variable
 * Return: 1 if a digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
