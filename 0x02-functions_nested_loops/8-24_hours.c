#include "main.h"
/**
 *  * jack_bauer - Prints all the minutes in a day.
 *   *desription: day mins
 *    * Return: Always 0.
*/
void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}
