#include "main.h"
/**
*main -  prints its name
*@argc: parameterof count
*@argv: vector argument
*Return: 0 always
*/
int main(int argc, int *argv[])
{
while (*argv[0] != '\0')
{
	_putchar(*argv[0]);
	argv[0]++;
}
_putchar(10);
return (0);
}

