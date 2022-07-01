#include <stdio.h> 

/**
*main -> Write a program that prints all possible combinations of
*single-digit numbers.
*Return: always 0
*/
int main(void)
{
int i;
	for (i = 48; i <= 57; i++)
	{
	putchar(i);
		if(i != 57)
			putchar(44);
			putchar(32);
	}
	for(str = 'a'; str <= 'f'; str++)
	{
	putchar(str);
	}
	putchar(10);
	return (0);
}
