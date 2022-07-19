#include "main.h"
/**
*print_chessboard - prints the chessboard
*@a: parameter
*/
void print_chessboard(char (*a)[8])
{
int i = 0, j = 0, k = 0;
while (**(a + k) != '\0')
{
k++;
}
while (**(a + i) != '\0')
{
for (j = 0; j < 8; j++)
{
_putchar(a[i][j]);
}
_putchar(10);
i++;
}
}
