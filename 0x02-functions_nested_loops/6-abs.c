#include "main.h"

/**
 * _abs - compute absolute value of an int
 * @c: int to be evaluted
 *
 * Return: absolute value of arg
 */

int _abs(int c)
{
	if (c < 0)
		c *= -1;
	return (c);
}
