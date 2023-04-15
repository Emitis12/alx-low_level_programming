#include <stdio.h>
#include "main.h"
/**
 * main - print the name
 * @argc: arguments counts
 * @argv: Argument
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
