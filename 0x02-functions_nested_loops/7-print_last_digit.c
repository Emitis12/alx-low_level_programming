#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * Return: value of the last digit of number
 */
int print_last_digit(int n)
{
	int lasts

	last = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	-putcha(last + 'a');
       return (last);	
}
