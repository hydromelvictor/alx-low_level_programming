#include <stdio.h>

/**
*main - print fizz or buzz or fizzbuzz
*Return: always 0
*/
int main(void)
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
else if (i % 15 == 0)
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
}