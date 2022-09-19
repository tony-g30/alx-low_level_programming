#include "main.h"
/**
 *_puts -> prints string
 *return: always 0
 */
void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		putchar(*str++);
		putchar('\n');
	}
}
