#include "main.h"
/**
 * _isupper - Check if a letter is upper
 * 0x: The number to be checked
 * Return: 1 for upper letter or 0 for anu else 
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 98)
	{
		return(1);
	}
	return(0);
}
