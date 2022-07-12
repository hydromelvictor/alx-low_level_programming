#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
*crackme - generates random valid password
*/
void crackme(void)
{
int i;
for(i = 0; i < 8; i++)
{
printf("%d", rand());
}
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