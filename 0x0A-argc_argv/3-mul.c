#include "main.h"
#include <stdio.h>
/**
*main - multiplies
*@argc: parameter
*@argv: parameter
*Return: always 0 or 1
*/
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}

