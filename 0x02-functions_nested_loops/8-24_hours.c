#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 *
 * Description: This function prints every minute of a day in the format HH:MM,
 * representing the time on a 24-hour clock.It uses loops to iterate through
 * hours (0 to 23) and minutes (0 to 59),and prints them with _putchar.
 */
void	jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
