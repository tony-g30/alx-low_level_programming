#include<stdio.h>
/**
*main -> this is a function to print the number of arguments passed to it
*@argc: represents no. of arguments
*@argv: contains array of the arguments
*Return: returns 0 if successful
*/
int main(int argc, char *argv[] __attribute((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
