#include "main.h"
/**
*_strcat -> this function concatenates two strings
*@dest: first parameter
*@src: second parameter
*return: a character
*@n: number of bytes
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;
	
	while (dest[len])
		len++;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
	
