#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This program will assign a random number to the variable n each time 
 *it is executed
 * Return: always 0
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d  is ", n);
int p = n - ( (int) n/10)*10);
if ( p> 5)
	printf("%d greater than 5", p);
if (p == 0)
	printf("0");
if (n < 6 && n != 0)
	printf(" %p less than 6 not 0", p);
printf("\n");
return (0);
}
