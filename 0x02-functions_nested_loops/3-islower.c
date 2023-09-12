#include "main.h"

/**
 * _islower - check me
 * @c: Character to be checked
 * Return: 0 always
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
