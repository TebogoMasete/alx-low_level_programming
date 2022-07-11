#include "main.h"
/**
 * swap_int - swap the value of two intigers
 * @a: intiger a
 * @b: intiger b
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
