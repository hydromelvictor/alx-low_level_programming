#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*crackme - generates random valid password
*/
void crackme(void)
{
printf("%d", rand());
}

/**
*main - the main
*Return: always 0
*/
int main(void)
{
crackme();
return (0);
}