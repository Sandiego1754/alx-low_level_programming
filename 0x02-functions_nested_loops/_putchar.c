#include "main.h"
#include <unstid.h>

/**
 * _putchar - write the character c to stand out
 * @c: the character to print
 * 
 * Return: On success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
