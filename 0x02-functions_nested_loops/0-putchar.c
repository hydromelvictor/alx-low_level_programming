#include "main.h"

/**
* word -> Write a program that prints _putchar
* Return: always 0
*/
int main(void)
{
char mot[8] = "_putchar";
int i;
	for (i = 0; i < 8; i++)
		_putchar(mot[i]);
	_putchar(10);
return (0);
}
