#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 /**
  * main - print a random number and state if it is positive, negetive or zero.
  *
  * Return: Always 0.
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negetive\n", n);
	else
		printf("%d zero\n", n);
	return (0);
}
