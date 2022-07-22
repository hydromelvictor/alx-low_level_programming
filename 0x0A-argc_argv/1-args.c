#include "main.h"
#include <stdio.h>
/**
*main - print arguments numbers
*@argc: parameter
*@argv: parameter
*Return: 0 always
*/
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 1)
	{
		printf("%d\n", argc - 1);
	}
	else
	{
		printf("0");
	}
return (0);
}

