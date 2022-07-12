#include "main.h"

/**
*_atoi - convert a string to an integer
*@s: parameter
*Return: integer
*/
int _atoi(char *s)
{
int i, j, p = 0;
char *n;
while (s[i] != '\0')
{
i++;
}
for (j = 0; j < i; j++)
{
if (_putchar(s[i]) < _putchar(48) || _putchar(s[i]) > _putchar(57))
{
return (0);
}
else
{
if (_putchar(s[i]) <= _putchar(57) && _putchar(s[i]) >= _putchar(48))
{
if (_putchar(s[i - 1]) == _putchar(45))
{
p++;
}
n = s + i;
}
}
}
i =(int) *n;
if (p > 0)
{
i = -i;
}
return (i);
}
