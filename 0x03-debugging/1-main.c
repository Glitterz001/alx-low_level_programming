#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
	int i;
	/** declearing of variable */
	printf("Infinite loop incoming :(\n");
	/** assigning variables */
		i = 0;
	/** initializzaton */
		while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
