#include "main.h"
/**
*_strncpy -> copoes an inputted no. od bytes from src to dest 
*@dest: buffer storing string copy
*@src: source string
*@n: minimum no. of bytes to be copied from source string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, slen = 0;
	
	while (src[slen])
		slen++;

	while (a < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (a < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
