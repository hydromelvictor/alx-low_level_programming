#include "main.h"

/**
*_islower -> Write a function that checks for lowercase character
*@c: is a interger
*Return: 1 or 0
*/
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	return (0);
}
