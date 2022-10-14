#include <stdio.h>
/**
 * main - Entry point of 4-print_alphabt.c
 * Return: Always 0 (Indicating success of 4-print_alphabt.c)
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
