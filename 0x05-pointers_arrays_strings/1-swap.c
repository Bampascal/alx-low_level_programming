#include "main.h"

/**
 * swap_int - Swap two integer pointers
 *
 * @a: An integer to swap
 * @b: Another interger to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
