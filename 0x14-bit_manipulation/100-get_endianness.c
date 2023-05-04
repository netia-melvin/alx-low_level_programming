#include "main.h"

/**
 * get_endianness - as the bname suggests
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int j;
        char *c;

        j = 1;
        c = (char *)&j;

        return (*c);
}
