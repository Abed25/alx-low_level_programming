#include <stdio.h>
#include "main.h"

/**
 * print_square - am printing # squares
 * @size: am using it
 */

void print_square(int size)
{
	if (size <= 0)
		putchar('\n');
	else
	{
		int i, k;

		for (i = 0; i < size; i++)
		{
			for (k = 0; k < size; k++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
