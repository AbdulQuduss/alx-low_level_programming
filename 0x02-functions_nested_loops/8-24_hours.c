#include <stdio.h>
#include "main.h"
void print_jack_bauer_minutes(void) 
{
	int hour;

	for (hour = 0; hour < 24; hour++) 
	{
	int minute;
	
	for (minute = 0; minute < 60; minute++) 
	{
	_putchar('0' + hour / 10);
	_putchar('0' + hour % 10);
	_putchar(':');
	_putchar('0' + minute / 10);
	_putchar('0' + minute % 10);
	_putchar('\n');
	}
	}
}
