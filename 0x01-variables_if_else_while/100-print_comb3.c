#include <stdio.h>
/**
* main - BamPascal to prints all possible different combinations of two digits.
* Return:0
*/
int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar((num1 % 10) + '0');
				putchar((num2 % 10) + '0');
				if (num1 == 9 && num2 == 8)
				{	
					continue;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
