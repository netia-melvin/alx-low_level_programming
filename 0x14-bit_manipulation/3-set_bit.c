#include "main.h"
/**
* @index: The index to set the value at - indices start at 0.
* set_bit - Sets the value of a bit at a given index to 1
* @n: A pointer to the bit.
* Return: If an error occurs - -1.
*/ 

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 12))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
