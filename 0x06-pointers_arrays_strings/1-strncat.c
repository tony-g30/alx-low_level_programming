#include "main.h"
/**
*_strcat -> this function concatenates two strings
*@dest: first parameter
*@src: second parameter
*return: a pointer to resulting dest string
*@n: number of bytes of src to be appended to dest
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
	
