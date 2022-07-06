#include "main.h"

/**
*print_times_table ->
*@n: parameter
*/
void print_times_table(int n)
{
int i, j;
    if (n <= 15 && n > 0)
    {
        for (i = 0; i <= n; i++)
        {
            for (j = 0; j <= n; j++)
            {
                int k  = i * j;
                if (k < 10)
                {
                if(j !=0)
                	_putchar(32);
                    _putchar(k + '0');
                    if(j != n)
                    	_putchar(',');
                   	 _putchar(32);
                   	  _putchar(32);
                }
                else
                {
                if(j !=0)
                	_putchar(32);
                    _putchar((k / 10) + '0');
                    _putchar((k % 10) + '0');
                    if(j != n)
                    	_putchar(',');
                   	 _putchar(32);
                   	 _putchar(32);
                }
            }
            _putchar(10);
        }
    }
}
