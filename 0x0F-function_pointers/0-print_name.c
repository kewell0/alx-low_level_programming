#include <stdio.h>
#include "function_pointers.h"

/**
* print_name - function that prints the name
* @name: name to print
* @f: function pointer to print a name
* Return void
*/


void print_name(char *name, void (*f)(char *))
{
if (name != 0 && f != 0)
f(name);

}
