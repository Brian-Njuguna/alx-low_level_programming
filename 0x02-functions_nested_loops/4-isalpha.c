#include "main.h"

/**
 * _isalpha-will check if a character is an alphabet
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	   (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
