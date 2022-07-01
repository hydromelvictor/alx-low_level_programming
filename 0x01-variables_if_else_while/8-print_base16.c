#include <stdio.h>

/**
*main -> Write a program that prints all the numbers of base 16 in lowercase
*Return: always 0
*/
int main(void)
{
char str;
int i;
	for (i = 48; i <= 57; i++)
	{
	putchar(i);
	}
	for (str = 'a'; str <= 'f'; str++)
	{
	putchar(str);
	}
	putchar(10);
	return (0);
}
