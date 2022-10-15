#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return:0 for the 8-print_base16.c
 */
int main(void)
{
	char i;
	int num;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	putchar('\n');
	return (0);
}
