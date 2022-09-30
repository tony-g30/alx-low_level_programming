#include <stdio.h>
/**
*main -> this is a function to print the program name
*@argc: represents no. of arguments
*@argv: contains array of the arguments
*Return: returns 0 if successful
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	int i = 0;

	printf("%s\n", argv[i]);

	return (0);
}
