#include "main.h"

/**
 * main - entry point
 *
 *
 * Return:always 0 (success).
 *
*/


int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if (num % 3 == 0 && !(num % 5 == 0))
			printf("Fizz");
		else if (num % 5 == 0 && !(num % 3 == 0))
			printf("Buzz");
		else if (num % 5 == 0 && num % 3 == 0)
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}

