#include <stdio.h> 
/**********/
int main(void)
{
	char str;
	int i;
	for(i = 48, str = 'a'; str<='f'; str++)
	{
	putchar(str);
	}
	char str;
	for(str = 'a'; str<='f'; str++)
	{
	putchar(str);
	}
	putchar(10);
	return (0);
}
