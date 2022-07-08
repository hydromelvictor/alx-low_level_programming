#include <stdio.h>

/**
*fizz_buzz - print fizz or buzz or fizzbuzz
*Return: always 0
*/
int fizz_buzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 != 0)
{
printf("Fizz");
if (i < 100)
{
printf(" ");
}
}
else if (i % 5 == 0 && i % 3 != 0)
{
printf("Buzz");
if (i < 100)
{
printf(" ");
}
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
if (i < 100)
{
printf(" ");
}
}
else
{
printf("%d ", i);
}
}
return (0);
}