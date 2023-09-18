#include "main.h"
#include <string.h>
/**
 * _strlen - return lenth of string
 * @s: character pointer
 * Return: return lenth of a string
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
