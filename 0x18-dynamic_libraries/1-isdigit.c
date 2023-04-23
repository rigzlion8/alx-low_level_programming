#include "main.h"

/**
* _isdigit - writes a function that checks for a digit 0 to 9
* @c: is the char to be checked
* Return:  0 or 1
**/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
