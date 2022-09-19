#include "main.h"
#include<string.h>
/**
 *_strlen -> calculates string length
 *return: always 0
 */
int _strlen(char *s)
{
	int c = 0;
	while (s[c] != '\0')
		c++;
	return (c);
}
