#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers.
 * @a: 2d array
 * @size: size of the array
*/


void print_diagsums(int *a, int size)
{
	int i, j1 = 0, j2 = 0;

	for (i = 0; i < size; i++)
	{
		j1 += a[i];
		j2 += a[size – i - 1];
		a += size;
	}
	printf("%d, ", j1);
	printf("%d\n", j2);
}
