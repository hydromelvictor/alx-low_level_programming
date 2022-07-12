#include "main.h"

/**
*_atoi - convert a string to an integer
*@s: parameter
*Return: integer
*/
int _atoi(char *s)
{
int i, j, n , p = 0;
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
n = s[i] + '0';
}
}
}
if (p > 0)
{
n = -n;
}
return (n);
}