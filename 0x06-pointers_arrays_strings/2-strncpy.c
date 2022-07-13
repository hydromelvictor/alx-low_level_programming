#include "main.h"

/**
*sup_copy - Write a function that copies a string
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: string
*/
char *sup_copy(char *dest, char *src, int n)
{
int k, i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
if (j < n)
{
for (k = 0; k <= j; k++)
{
*(dest + k) = *(src + k);
}
for (; k < n; k++)
{
*(dest + k + 1) = '\0';
}
}
else
{
for (k = 0; k < n; k++)
{
*(dest + k) = *(src + k);
}
}
return (dest);
}

/**
*sub_copy - Write a function that copies a string
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: string
*/
char *sub_copy(char *dest, char *src, int n)
{
int k, i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
if (j < i)
{
for (k = 0; k <= j; k++)
{
*(dest + k) = *(src + k);
}
for (; k < i; k++)
{
*(dest + k + 1) = '\0';
}
}
else
{
for (k = 0; k < i; k++)
{
*(dest + k) = *(src + k);
}
}
return (dest);
}

/**
*_strncpy - Write a function that copies a string
*@dest: parameter
*@src: parameter
*@n: parameter
*Return: string
*/
char *_strncpy(char *dest, char *src, int n)
{
int k, i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
j++;
}
if (n <= i)
{
return (sup_copy(dest, src, n));
}
else
{
return (sub_copy(dest, src, n));
}
}
