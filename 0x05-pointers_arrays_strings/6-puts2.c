#include "main.h"
#include <stdio.h>

/**
 * puts2 - character of a string
 * @str: character parameter
 * Return: nothing
 */

void puts2(char *str)
{
	int len = 0;
	int j = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	j = len - 1;
	for (o = 0 ; o <= j ; o++)
	{
		if (o % 2 == 0)
	{
		putchar(str[o]);
	}
	}
	putchar('\n');
}
