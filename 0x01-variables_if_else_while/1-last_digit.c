#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - > This program will assign a random number to the variable n
 *each time it is executed
 *Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d  is  %d " , n, (n % 10) );
	if ((n % 10) > 5)
		printf(" and greater than 5");
	if ((n % 10)  == 0)
		printf("0 and is 0");
	if ((n % 10) < 6 && (n % 10)  != 0)
		printf("less than 6 and not 0");
	printf("\n");
	return (0);
}
