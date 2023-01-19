#include "function_pointers.h"

/**
 * void print_name - prints a name
 * @name: name to be printed
 * @f: the function to send the name to
 * Return: nothing
 *
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
