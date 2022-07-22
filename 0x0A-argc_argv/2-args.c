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
int i;
printf("%s", argv[0]);
if (argc > 1)
{
i = 1;
while (argv[i] != '\0')
{
printf("\n%s", argv[i]);
i++;
}
}
return (0);
}

