#include "main.h"
/**
*_strncat -> this function concatenates two strings
*@dest: first parameter
*@src: second parameter
*@n: number of bytes of src to be appended to dest
**return: a pointer to resulting dest string
*/
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, i = 0;

	while (dest[dlen++])
		dlen++;
	while (i < n && src[i])
	{
		dest[dlen] = src[i];
		dlen++;
		i++;
	}
	dest[dlen + n + 1] = '\0';
	return (dest);
}	
