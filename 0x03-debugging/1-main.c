#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;
	/** Declearation */
        printf("Infinite loop incoming :(\n");
	/** initialising */
        i = 0;

        while (i < 10)
        {
                putchar(i);
        }
	/** print the output */
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
