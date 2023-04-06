#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - Print a string followed by a new line
 * @s: the string to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
    if (*s == '\0') // base case: end of string
    {
        printf("\n"); // print new line
        return;
    }
    putchar(*s); // print current character
    _puts_recursion(s + 1); // call function recursively with next character
}
