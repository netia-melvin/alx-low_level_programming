#include "main.h"

/**
 * flip_bits - find number of its required to effect a flip
 * @n: test par 1
 * @m: test par 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int i = n ^ m;

	while (i != 0)
	{
		if (i & 1)
			flip++;
		i >>= 1;
	}
	return (flip);
}
