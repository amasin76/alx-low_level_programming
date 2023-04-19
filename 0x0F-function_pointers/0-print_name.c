#include "main.h"

/**
 * print_name - prints a given name using a given function pointer.
 * @name: the name to be printed.
 * @f: the function pointer used to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
