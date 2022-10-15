#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers.
 * Return:0 for all possible combination of single-digit numbers
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putcchar('\n');
	return (0);
}
