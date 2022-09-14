#include <stdio.h>
/*
 * main - calls the function to excute
 *print_alphabet - prints alphabet in lowercase
 *return -always successful
 */
void print_alphabet(void)
{
        char i;

        for (i = 'a';i<='z';i++)
        {
                _putchar(i);

        }

        _putchar("\n");
}
