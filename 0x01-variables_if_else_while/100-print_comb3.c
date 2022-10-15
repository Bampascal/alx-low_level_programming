#include <stdio.h>
/**
 * main - BamPascal to prints all possible different combinations of two digits.
 * Return:0
 */
int main(void)
{
	int num1
	
	for (num1 = 0; num1 < 90; num++)
	{
		for ()
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
		}
		if (num1 != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
