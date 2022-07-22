#include "main.h"
/**
*_str - prints strings
*@c: parameter
*Return: 0 always
*/
int _str(char *c)
{
	while (*c != '\0')
        {
                _putchar(*c);
                c++;
        }
	return (0);
}
/**
*main - prints all arguments
*@argc: parameter
*@argv: parameter
*Return: 0 always
*/
int main(int argc, int *argv[])
{
	int i = 0;
	_str(arg[0]);
	if (argc > 1)
	{
		i = 1;
		while (i < argc)
		{
			if (i < arg - 1)
			{
				_putchar(10);
			}
			_str(arg[i]);
			i++;
		}
	}
	return (0);
}

