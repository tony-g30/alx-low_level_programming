#include "main.h"
#include<stdio.h>
/**
*_strcat -> this function concatenates two strings
*@dest: first parameter
*@src: second parameter
*return: a pointer to resulting dest
*/
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++; 
	}
	dest[dlen] = '\0';
	return (dest);
}
