#include <stdio.h>
#include "main.h"

/**
 * main - name of the program
 * @argc: sets the number of arguments
 * @argv: sets the array of arguments
 *
 * Return: Always a success
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
