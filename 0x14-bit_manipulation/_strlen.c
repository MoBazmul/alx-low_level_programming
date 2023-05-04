#include "main.h"

/*
 * @_strlen functions counts the number of
 * characters in a string then returns the
 * amount of characters within that string
 */

int _strlen(char *str)
{
	int count=0;
	while(1)
	{
		if (*str == '\0')
			break;
		++str;
		++count;
	}
	return count;
}

