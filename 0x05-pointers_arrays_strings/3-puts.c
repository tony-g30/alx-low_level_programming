#include "main.h"
#include<stdio.h>
/**
 * @str: points to character string
 *_puts -> prints string
 *return: always 0
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
