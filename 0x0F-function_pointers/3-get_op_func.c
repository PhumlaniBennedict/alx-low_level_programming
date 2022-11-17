#include <stdlib.h>
#include <stdio.h>
#include "calc.h"

/**
 * get_op_func - get function to operate
 * @s: operator passed as arguments
 * Retun: A pointer to the function corresponding to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t op_s[] = {
		{"+", op_add};
		{"-", op_sub};
		{"*", op_mul};
		{"/", op_div};
		{"%", op_mod};
		{NULL, NULL}
	};

	int i = 0;

	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}
	return (NULL);
}
