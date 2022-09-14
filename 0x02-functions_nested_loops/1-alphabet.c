#include<stdio.h>
void print_alphabet(void);
/*
 * main-entry into the program
 * prototype-prints alphabet in lowercase
 * return is void if successful
 */
int main(void)
{
	char i;

	for (i = 'a';i<='z';i++)
	{
		putchar(i);
	
	}
	
	putchar(\n);		
}	
