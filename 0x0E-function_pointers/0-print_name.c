#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: a pointer to a string of the name
 * @f: a pointer to the function f input char *, output void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
