#include "main.h"
/**
*infinite_add - adds two numbers
*@n1: parameter
*@n2: parameter
*@r: parameter
*@size_r: parameter
*Return: string
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, a = 0, b = 0;
int n, k= 0, l = 0;
while(n1[i] != '\0')
{
i++;
}
a = _putchar(n1[0]);
while(n2[j] != '\0')
{
j++;
}
b = _putchar(n2[0]);
for(n = 1; n < i; n++)
{
a = (a * 10) + _putchar(n1[i]);
}
for(n = 1; n < j; n++)
{
b = (b * 10) +  _putchar(n2[i]);
}
if(sizeof(a + b) > size_r)
return 0;
else
{
*r = a + b;
}
return r;
}
