#include "main.h"

/**
 * get_endianness - as the bname suggests
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int n;
        char *k;

        n = 1;
        k = (char *)&n;

        return (*k);
}
