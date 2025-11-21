#include <unistd.h>

/**
 * _putchar - displays c input character in standard output
 * @c: character input
 * return: 1 or error appoint
 */

int _ptuhcar(char c)
{
	return(write(1, &c, 1));
}
