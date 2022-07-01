#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* *
*	main - function assign a random number 
*	Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("%d : ", n);
	if (n > 0)
		printf(" est positif\n");
	else if ( n == 0){
		printf(" est zero\n");
	else
		printf(" est negatif\n");
	
	return (0);
}
