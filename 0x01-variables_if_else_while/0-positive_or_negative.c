#include <stdlib.h>
#include <stdio.h>
#include <time.h>

 /**
  *
  *main - prints a random number and states whether it is positive,
  *	negetive or zero.
  *
  *Return: Always 0.
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
		(n = 0);
		printf("%d zero\n", n);
	return (0);
}