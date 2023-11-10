#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - Compares function with pointer and returns the equal.
 * @s: points a char
 * Return: Returns the function and the operator when equal
**/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};

int a = 0;

while (ops[a].op != NULL)
{
if (!strcmp(ops[a].op, s))
return (ops[a].f);
a++;
}
return (NULL);
}
