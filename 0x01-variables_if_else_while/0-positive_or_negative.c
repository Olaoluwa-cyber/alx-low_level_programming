#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n - n == 0)
	{
		printf("%d", n);
		printf("is positive");
	}
	else
	{
		if (n - 0 == n)
		{
			printf("%d", n);
			printf("is zero");
		}
		else
			printf("%d", n);
			printf("is nagative");
	}
	return (0);
}
