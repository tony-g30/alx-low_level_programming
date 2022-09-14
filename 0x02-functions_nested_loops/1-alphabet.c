#include <main.h>
void print_alphabet(void)

/*
 * main - calls the function to excute
 *print_alphabet - prints alphabet in lowercase
 *return -always successful
 */
int main()
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
        char i;

        for (i = 'a';i<='z';i++)
        {
                _putchar(i);

        }

        _putchar("\n");
}
