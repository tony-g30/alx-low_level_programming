#include "main.h"
#include<stdio.h>
/**
 *_strcpy - copies a string
 *@dest: destination of copied items
 *@src: source of copied items
 *return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';
	return (dest);
}
