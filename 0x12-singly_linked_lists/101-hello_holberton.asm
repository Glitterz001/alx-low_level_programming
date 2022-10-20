#include <stdio.h>
/**
 * execute_before_main - executes this function before main function
 * Note: made possible by prior declaration of "__attribute__ ((constructor))"
 */

void __attribute__ ((constructor)) execute_before_main()
{
	prinf("Hello, Holberton/n");
}
