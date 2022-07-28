#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplication
 * @argc: parameter
 * @argv: parameter
 * Return: integer
 */
int main(int argc, char *argv[])
{
int i = 0;
if (argc != 3)
{
printf("Error\n");
exit(98);
}
else
{
while (argv[1][i] != '\0')
{
if (argv[1][i] > 57 || argv[1][i] < 48)
{
printf("Error\n");
exit(98);
}
i++;
}
i = 0;
while (argv[1][i] != '\0')
{
if (argv[2][i] > 57 || argv[2][i] < 48)
{
printf("Error\n");
exit(98);
}
i++;
}
printf("%lld", (long long)argv[1] * (long long)argv[2]);
return (0);
}
}