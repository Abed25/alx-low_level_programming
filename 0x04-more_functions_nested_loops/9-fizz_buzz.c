#include <stdio.h>
#include "main.h"

/**
 * main - fizzbuzz
 * Return: 0 a success
 */

int main(void)
{
	int l;

	for (l = 1 ; l <= 100 ; l++)
	{
		if ((l % 3 == 0) && (l % 5 == 0))
			printf("%s", "FizzBuzz");
		else if (l % 3 == 0)
			printf("%s", "Fizz");
		else if (l % 5 == 0)
			printf("%s", "Buzz");
		else
			printf("%d", l);
		if (l != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
