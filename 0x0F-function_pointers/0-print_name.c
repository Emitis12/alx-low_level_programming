#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - Prints name
 * @name: name to be printed
 * @f: function pointer
 *
 * Return; nothing
 */
void print_name(char *name, void (*f)(char *))
{
if (!name || !f)
return;
f(name);
}
