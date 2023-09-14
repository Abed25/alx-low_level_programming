#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - diagonal line
 * @n: accept the variable
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					putchar('\\');
				else if (j < i)
					putchar(' ');
			}
			putchar('\n');
		}
	}
	if (n <= 0)
	{
		putchar('\n');
	}
}
