#include "main.h"

/**
 * _isdigit - checks for a digit.
 * @x: The number to be cheched
 * Return: 1 for digits, 0 otherwise.
 */
int _isdigit(int x)
	{
	if (x  <= 48 && x  <= 57)
		{
		return (1);
		}
	else
		{
		return (0);
		}
	}
