#include "main.h"
/**
*_strcat -> this function concatenates two strings
*@dest: first parameter
*@src: second parameter
*return: a character
*@n: number of bytes of src to be appended to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;
	
	while (dest[len++])
		len++;
	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];

	return (dest);
}
	
