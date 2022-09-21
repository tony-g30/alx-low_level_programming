#include "main.h"
#include<string.h>
/**
*_strcat -> this function concatenates two strings
*@dest: first parameter
*@src: second parameter
*return: a character
*/
char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
