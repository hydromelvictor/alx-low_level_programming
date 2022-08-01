#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#define str     __FILE__
/**
 * main - print the name of the file
 * Return: 0 always
 */
int main(void)
{
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
return (0);
}
