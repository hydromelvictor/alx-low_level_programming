#include <stdio.h>

/**
*main -> Write a program that prints the lowercase alphabet in reverse
*Return: always 0
*/
int main(void)
{
char str;
	for (str = 'z'; str >= 'a'; str++)
	{
	putchar(str);
	}
	putchar(10);
	return (0);
}
