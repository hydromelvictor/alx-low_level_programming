#include "main.h"

/**
*rev_string - reverses a string
*@s: parameter
*/
void rev_string(char *s)
{
int i = 0,j = 0;
while (s[i] != '\0')
{
i++;
}
j = i - 1;
while (j >= 0)
{
_putchar(s[j]);
j--;
}
}
