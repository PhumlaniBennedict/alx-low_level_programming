#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_int(int a, int b);
int op_mod(int a, int b);

/**
 * struct op - struct op
 * @op: operator
 * @f: function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /* CALC_H */
