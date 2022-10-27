#include "main.h"

/**
 * Entry point - convert a  binary to an unsigned int
 * @binary
 * Return the converted number
 */

unsigned int binary_to_uint(const char *b);
{
	unsigned int sum = 0;
	int len = 0, i;

	if(b == NULL)
		return (sum);


	while (b[len] != '\0')
		len++;
	len -= 1;

	/* iterate string and if '1' then multiply by power of 2 */
	/* get power of 2 via binary (e.g. 1<<2 = 100 in binary = 4) */
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << len));
		i++;
		len--;
	} 

	return (sum);
}
