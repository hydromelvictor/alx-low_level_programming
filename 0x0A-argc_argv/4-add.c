#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*main -  adds positive numbers
*@argc: parameter
*@argv: parameter
*Return: integer
*/
int main(int argc, char *argv[])
{
int i, j, k = 0;
if (argc < 1)
{
printf("%d\n", 0);
return (-1);
}
else
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (sizeof(atoi(&argv[i][j])) != sizeof(int))
{
printf("%s\n", "Error");
return (1);
}
k += atoi(argv[i]);
}
}
printf("%d\n", k);
return (0);
}
}

