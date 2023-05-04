#include "main.h"

/**
 * set_bit - set the value of bit to 1 at a given position
 * @index: position
 * @n: pointer to test par
 * Return: - 1 0r 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 7)
		return (-1);

	mask = 1UL << index;
	*n |= mask;
	return (1);
}
