#include <stdio.h>
/**
 * main Entry point of 3-print_alphabets.c
 * Return: Always return 0 (Success of 3-print_alphabets.c)
 */
int main(void)
{
	char i;
	char j;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (j = 'A'; j <= 'Z'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
