#include<stdio.h>
/**
*main -> this is a function to print the result of addition operation
*@argc: represents no. of arguments
*@argv: contains array of the arguments
*Return: returns 0 if successful
*/
int main(int argc, char *argv)
{
	int res = 0, num, i, j, k;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 0; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			printf("%s\n", "Error");
			return (1);
		}
	}
	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		res += num;
	}
	printf("%d\n", res);
	return (0);
}
