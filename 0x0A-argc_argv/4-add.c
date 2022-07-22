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
int i, k = 0;
if (argc > 1)
{
for (i = 1; i < argc; i++)
{
int j = 0;
while (*(argv[i] + j) != '\0')
{
int m = _putchar(*(argv[i] + j) + '0');
if (m > 57 || m < 48)
{
printf("%s\n", "Error");
return (1);
}
else
{
k += argv[i];
}
j++;
}
}
printf("%d\n", k);
return (0);
}
else
{
_putchar(0 + '0');
_putchar(10);
return (0);
}
}

