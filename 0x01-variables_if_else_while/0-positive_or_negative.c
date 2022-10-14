#include <stdio.h>
/**
 * main -0-positive_or_negative.c
 *
 * Return: 0
 */
int main(void)
{
	int x;
	printf("Enter the number\n");
	scanf("%li", &x);
	printf("Value entered is %li \n");
	if(x>0)
	{
		printf("%li is positive\n");
	}
	else if (x<0)
	{
		printf("%li is negative\n");
	}
	else if (x==0)
	{
		printf("%li is zero\n");
	}
	return (0);
}
