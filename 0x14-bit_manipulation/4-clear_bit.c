#include "main.h"

/**
 * clear_bit - set the value to 0 at a given position
 * @n: test par
 * @index: position
 * Return: 1 0r -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 7)
		return (-1);
	mask = ~(1UL << index);
	*n &= mask;
	return (1);
}
