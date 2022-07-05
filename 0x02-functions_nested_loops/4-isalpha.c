#include "main.h"

/**
*_islower -> Write a function that checks for lowercase character.
*Return: 0 or 1
*/
int _isalpha(int c)
{
	if (_islower(c) == 1 || (c <= 90 && c >= 65))
        	return (1);
	return (0);
}
