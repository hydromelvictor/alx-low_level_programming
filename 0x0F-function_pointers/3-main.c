#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - main function
 * @argc: parameter
 * @argv: parameter
 * Return: statut exiting or integer
 */
int main(int argc, char *argv[])
{
if (argc != 4)
{
printf("Error\n");
exit(98);
}
else
{
int a = atoi(argv[1]), b = atoi(argv[3]);
char *s = argv[2];
if (*s != '+'  && *s != '-' && *s != '/'  && *s != '%')
{
printf("Error\n");
exit(99);
}
if ((*s == '/' || *s == '%') && b == 0)
{
printf("Error\n");
exit(100);
}
if (get_op_func(s) == NULL)
{
printf("\n");
exit(99);
}
(*get_op_func(s))(a, b);
printf("\n");
}
return (0);
}
