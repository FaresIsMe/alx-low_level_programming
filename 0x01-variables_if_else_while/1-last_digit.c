#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main-entry
 *description:what
 *Return: always 0 (Success)
*/
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				int k = n % 10;

				if (k == 0)
				{
					printf("Last digit of %d is %d and is 0", n, k);
				}
				else if (k > 5)
				{
					printf("Last digit of %d is %d and is greater than 5 and not 0", n, k);
				}
				else
				{
					printf("Last digit of %d is %d and is less than 6 and not 0", n, k);
				}
					return (0);
}
