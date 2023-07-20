#include "main.h"
/**
 *  * largest_number - Returns the largest of three numbers.
 *   * @a: The first integer.
 *    * @b: The second integer.
 *     * @c: The third integer.
 *      * Return: The largest of the three numbers.
*/
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
		largest = b;

	if (c > largest)
		largest = c;

	return (largest);
}
