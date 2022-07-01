#include <stdio.h>

/**
*main -> 
*
*Return; always 0
*/
int main(void)
{
	char str;
	for (str = 'a'; str <= 'z'; str++)
	{
		if (str !='q' && str != 'e')
		{
		putchar(str);
		}
	}
	putchar(10);
	return (0);
}
