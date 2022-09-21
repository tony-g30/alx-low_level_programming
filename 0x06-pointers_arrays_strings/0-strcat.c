#include "main.h"
/**
*_strcat -> this function concatenates two strings
*@dest: first parameter
*@src: second parameter
*return: a character
*/
char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (dest[i++])
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len++] = src[i];

	return (dest);
}
