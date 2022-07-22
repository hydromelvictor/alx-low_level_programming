#include "main.h"
#include <stdio.h>
#include <string.h>
/**
*main - multiplies
*@argc: parameter
*@argv: parameter
*Return: always 0 or 1
*/
int main(int argc, int *argv[])
{
	if (argc == 3)
	{
		printf("%d", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error");
		return (1);
	}
}

