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
	
	while (src[i++])
		slen++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] src[i];

	for (i = slen; i < n; i++)
		dest[i] = '\0'
	return (dest);
}
