#include "main.h"

/**
*_isalpha -> Write a function that checks for lowercase character.
*@c: is a integer
*Return: 0 or 1
*/
int _isalpha(int c)
{
if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
	return (1);
return (0);
}
