#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"
/**
 * main - opcodes
 * @argc: parameter
 * @argv: parameter
 * Return: hexadecimal integer
 */
int main(int argc, char *argv[])
{
int i, j, k = 0;
char str[17] = "0123456789abcdef";
for (i = 0; i < argc; i++)
{
if (argv[i][0] == '-')
{
printf("Error\n");
exit(2);
}
for (j = 0; j < 17; j++)
{
if (argv[i][0] != str[j] || argv[i][1] != str[j])
{
k++;
}
}
if (k >= 16)
{
printf("Error\n");
exit(1);
}
printf("%d", atoi(argv[i]));
}
return (0);
}
