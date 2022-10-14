#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Determines either greater than 5, is less than 6, or is 0
 * Return:0 (succes)
 */
int main(void)
{
	int n, l;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ldiv_t = n % 10;
	if (ldigit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, ldigit);
}
	else if (ldigit == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, ldigit);
}
	else if (ldigit < 6 && ldigit != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ldigit);
}
	return (0);
}
