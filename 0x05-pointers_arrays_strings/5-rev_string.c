#include "main.h"

/**
*rev_string - reverses a string
*@s: parameter
*/
void rev_string(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
while (i >= 0)
{
_putchar(s[i]);
if (i == 0)
{
_putchar(10);
}
i--;
}
}
