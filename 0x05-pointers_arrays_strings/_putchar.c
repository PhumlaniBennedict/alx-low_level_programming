#include "unistdio.h"

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: on succes 1
 */
into _putchar(char c)
{
	return(write(1, &c, 1));
}
