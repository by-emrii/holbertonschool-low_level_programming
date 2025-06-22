#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: void
 */
void jack_bauer(void)
{	
	int curr_hour = 0;
	int curr_min = 0;

	while (curr_hour <= 23)
	{
		curr_min = 0;
		while (curr_min <= 59)
		{
			_putchar((curr_hour / 10) + '0');
			_putchar((curr_hour % 10) + '0');
			_putchar(':');

			_putchar((curr_min / 10) + '0');
			_putchar((curr_min % 10) + '0');
			_putchar('\n');

			curr_min = curr_min + 1;
		}
		curr_hour = curr_hour + 1;
	}
}
