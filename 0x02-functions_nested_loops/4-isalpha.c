#include "main.h"

/**
 * _isalpha - checks
 * @c: be allowed
 * Return: 1 if is a letter otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c < 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
