#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the file
 * Return: 0 always
 */
int main(void)
{
int i = 0;
const char *str = __FILE__;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
}
