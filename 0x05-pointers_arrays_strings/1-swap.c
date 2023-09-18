#include "main.h"

/**
 * swap_int - does swapping
 * @a: first pointer
 * @b: second pointer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
