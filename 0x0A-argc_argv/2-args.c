#include "main.h"
#include <stdio.h>
/**
*main - prints all arguments
*@argc: parameter
*@argv: parameter
*Return: 0 always
*/
int main(int argc, char *argv[])
{
printf("%s", argv[0]);
if (argc > 1)
{
while (*argv != '\0')
{
printf("\n%s", *argv);
argv++;
}
}
return (0);
}

