#include <stdlib.h>
#include <stdlib.h>
#include "main.h"

int mul (int argc, char *arg[])
{
	int num1;
	int num2;
	int multi;

	if(argc != 2)
	{
		printf("Error");
		exit(98);
	}
	multi = num1 * num2;
	return (multi);
}
int display(int a, int b)
{
	int c;

	if(a <= '0' && a <= '9' || b <= '0' && b <= '9' )
	{
		c = mul(a, b);
		return (c);
	}
	else
	{
		printf("Error");
		exit(98);
	}
}
int main()
{
	int i;
	int j;
	int k;

	k = display(i,j);
	return (k);
}
