#include <stdio.h>
#include <stdlib.h>
/**
*purge - counter
*@nbre: parameter
*@n: indice
*@t: array
*Return: integer
*/
int purge(int nbre, int n, int *t)
{
int g = nbre / t[n], i;
if (nbre % (g * t[n]) != 0)
{
int b = nbre - (g * t[n - 1]);
for (i = n + 1; i < 5; i++)
{
if (b < t[i])
{
continue;
}
else
{
int count = b / t[i];
g += count;
purge(b, n + 1, t);
}
}
}
else
{
printf("%d\n", g);
return (0);
}
}
/**
*main - change
*@argc: parameter
*@argv: parameter
*Return: integer
*/
int main(int argc, char *argv[])
{
int t[5] = {25, 10, 5, 2, 1};
int i, p = 0;
if (argc == 2)
{
if (atoi(argv[1]) < 0)
{
printf("%d\n", 0);
return (-1);
}
else
{
for (i = 0; i < 5; i++)
{
if (atoi(argv[1]) < t[i])
{
p += 1;
}
else
{
break;
}
}
int h = atoi(argv[1]);
return (purge(h, p, t));
}
}
else
{
printf("%s\n", "Error");
return (1);
}
}

