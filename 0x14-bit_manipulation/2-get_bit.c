#include "main.h"

/**
 *get_bit - return bit at a specified index
 *@n: test par
 *@index: position
 *Return: bit at position n
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 6)
		return (-1);

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
