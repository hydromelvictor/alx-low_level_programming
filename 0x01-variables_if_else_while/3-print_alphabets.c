#include <stdio.h>

/**
*main -> Write a program that prints the alphabet in lowercase
*Return: always  0
*/
int main(void)
{
	int str;
	for(str = 97; str <= 122; str++)
	{
	putchar(str);
	}
	for(str = 65; str <= 90; str++)
	{
	putchar(str);
	}
	putchar(10);	
	return (0);
}
