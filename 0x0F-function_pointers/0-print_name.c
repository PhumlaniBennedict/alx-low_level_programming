#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - print name
 *
 * @name: name print
 *
 * @f: pinter
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

f(name);

}
