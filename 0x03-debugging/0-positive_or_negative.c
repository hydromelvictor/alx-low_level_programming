#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main -> This program will assign a random number to the variable n
*each time it is executed
*Return: always 0
*/
int positive_or_negative(int i){
int n;

srand(time(0));
n = i;
if (n > 0)
	printf("%d is positive\n", n);
if (n == 0)
	printf("%d is zero\n", n);
if (n < 0)
	printf("%d is negative\n", n);
return (0);
}
