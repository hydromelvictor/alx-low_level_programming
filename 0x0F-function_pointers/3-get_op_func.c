#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - Get the op func object
 * @s: parameter
 * Return: int(*)(int a, int b)
 */
int (*get_op_func(char *s))(int a, int b)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (i < 5)
{
if (s == ops[i].op)
{
return (ops[i].f);
}
}
return (ops[5].f);
}
